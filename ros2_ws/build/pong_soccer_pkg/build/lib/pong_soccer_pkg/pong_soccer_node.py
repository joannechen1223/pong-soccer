import sys
import rclpy
import numpy as np
from rclpy.duration import Duration
from cv_bridge import CvBridge
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from rclpy.time import Time
from geometry_msgs.msg import Twist
from sensor_msgs.msg import Image, LaserScan
from vision_msgs.msg import Detection2DArray
import os


class PongSoccerNode(Node):
    def __init__(self):
        super().__init__('pong_soccer')

        self.FORWARD = 0
        self.BACK = 1
        self.TURN = 2
        self.STOP = 3
        self.SPIN = 4
        self.MOVE_LEFT = 5
        self.SPEECH = 6

        # differentiate obstacle color
        self.OBSTACLE_DETECT_START_X = 126
        self.OBSTACLE_DISTANCE_END_X = 175
        self.OBSTACLE_DETECT_START_Y = 126
        self.OBSTACLE_DETECT_START_Y = 175

        self.state = self.SPIN
        self.state_ts = self.get_clock().now()

        self.prev_state = None

        self.TURNING_TIME = 2.4 # 2 seconds
        self.BACKING_TIME = 2.0 # 2 seconds
        self.SCAN_TIMEOUT = 1.0 # 1 second
        self.MOVE_LEFT_TIME = 2.2

        self.forward_time = 0.0

        self.SPEED_LINEAR = 0.3
        self.SPEED_ANGULAR = 0.5
        self.OBSTACLE_DISTANCE = 2.55
        self.HUMAN_DISTANCE = 65000

        self.br = CvBridge()
        self.last_scan = None
        self.last_rgb_image = None
        self.last_depth_image = None
        self.person_detected = False
        self.center_depth = 0
        self.person_size = 0

        # Subscribe to lidar scan
        self.scan_sub = self.create_subscription(
            LaserScan,
            'scan',
            self.scan_callback,
            qos_profile_sensor_data)
    
        # Subscribe to RGB /color/image
        self.rgb_sub = self.create_subscription(
            Image,
            '/color/image',
            self.rgb_callback,
            10)
        
        # Subscribe to depth /stereo/depth
        self.depth_sub = self.create_subscription(
            Image,
            '/stereo/depth',
            self.depth_callback,
            10)

        # Subscribe to YOLO pedestrian detections /color/mobilenet_detect
        self.person_detection_sub = self.create_subscription(
            Detection2DArray,
            '/color/mobilenet_detections',
            self.person_detection_callback,
            10)

        self.vel_pub = self.create_publisher(Twist, 'cmd_vel', 10)
        self.timer = self.create_timer(0.05, self.control_cycle)

    def scan_callback(self, msg):
        # print("in scan_callback")
        self.last_scan = msg
    
    def rgb_callback(self, msg):
        # encoding bgr8
        self.last_rgb_image = self.br.imgmsg_to_cv2(msg, desired_encoding=msg.encoding)
        # print(f"in rgb_callback: {self.last_rgb_image.shape}")
    
    def depth_callback(self, msg):
        print("in depth_callback")
        # Convert raw data to NumPy array
        depth_array = np.frombuffer(msg.data, dtype=np.uint16)

        # Handle endianness
        if msg.is_bigendian != (sys.byteorder == 'big'):
            depth_array = depth_array.byteswap()
        
        # Reshape the array to 2D image dimensions
        depth_array = depth_array.reshape((msg.height, msg.width))

        # Convert depth from millimeters to centimeters
        depth_in_cm = depth_array.astype(np.float32) / 10.0

        # Optional: Handle invalid depth values (e.g., zero values)
        depth_in_cm[depth_array == 0] = np.nan  # Set invalid measurements to NaN

        # Example: Access depth value at the center pixel
        center_row = msg.height // 2
        center_col = msg.width // 2
        center_depth_cm = depth_in_cm[center_row, center_col]

        self.get_logger().info(f"Center pixel depth: {center_depth_cm:.2f} cm")
        # print(f"width: {msg.width} height: {msg.height} data_len: {len(msg.data)}")
        # Convert raw data to NumPy array
        depth_array = np.frombuffer(msg.data, dtype=np.uint16)

        # Handle endianness
        if msg.is_bigendian != (sys.byteorder == 'big'):
            depth_array = depth_array.byteswap()
        
        # Reshape the array to 2D image dimensions
        depth_array = depth_array.reshape((msg.height, msg.width))

        # Convert depth from millimeters to centimeters
        depth_in_cm = depth_array.astype(np.float32) / 10.0

        # Optional: Handle invalid depth values (e.g., zero values)
        depth_in_cm[depth_array == 0] = np.nan  # Set invalid measurements to NaN

        # Example: Access depth value at the center pixel
        center_row = msg.height // 2
        center_col = msg.width // 2
        center_depth_cm = depth_in_cm[center_row, center_col]

        self.get_logger().info(f"Center pixel depth: {center_depth_cm:.2f} cm")
        self.last_depth_image = msg
        self.center_depth = center_depth_cm
    
    def person_detection_callback(self, msg):
        for detection in msg.detections:
            for result in detection.results:
                class_id = result.hypothesis.class_id
                score = result.hypothesis.score
                # 15 means that there is a person in the camera
                if (class_id == '15') and (score > 0.98):
                    self.person_size = detection.bbox.size_x * detection.bbox.size_y
                    print(self.person_size)
                    self.person_detected = True
                else:
                    self.person_detected = False

    def control_cycle(self):
        '''
        Copy from Lab 2
        '''
        if self.last_scan is None:
            return
        
        out_vel = Twist()

        # temp: color of obstacle
        if self.check_is_obstacle():
            print("is obstacle")

        if self.state == self.SPIN:
            out_vel.angular.z = self.SPEED_ANGULAR
            if self.check_spin_2_forward():
                print(self.center_depth)
                print('Spin ==> Forward')
                out_vel.angular.z = 0.0
                self.go_state(self.FORWARD)

        elif self.state == self.FORWARD:
            out_vel.linear.x = self.SPEED_LINEAR
            if self.check_forward_2_speech():
                print('Forward ==> Speech')
                self.go_state(self.SPEECH)
            elif self.check_forward_2_move_left(): 
                print('Forward ==> Move Left')                      
                self.go_state(self.MOVE_LEFT)
            # if self.check_forward_2_back():
            #     self.go_state(self.BACK)
            if self.check_forward_2_stop():
                print("Forward ==> Stop")
                self.go_state(self.STOP)
        elif self.state == self.MOVE_LEFT:
            elapsed = self.get_clock().now() - self.state_ts
            if (elapsed < Duration(seconds=self.TURNING_TIME)):
                out_vel.angular.z = self.SPEED_ANGULAR
            else: 
                out_vel.linear.x = self.SPEED_LINEAR 
            if self.check_move_left_2_spin():
                print("Move Left ==> Spin")
                self.go_state(self.SPIN)
        elif self.state == self.BACK:
            out_vel.linear.x = -self.SPEED_LINEAR
            if self.check_back_2_turn():
                print("Back ==> Turn")
                self.go_state(self.TURN)

        elif self.state == self.TURN:
            out_vel.angular.z = self.SPEED_ANGULAR

            if self.check_turn_2_forward():
                print("Turn ==> Forward")
                self.go_state(self.FORWARD)

        elif self.state == self.STOP:
            if self.check_stop_2_forward():
                print("Stop ==> Forward")
                self.go_state(self.FORWARD)
        
        elif self.state == self.SPEECH:
            # print("Reached State Speech!")
            os.system('aplay hello_loud.wav')
            out_vel.linear.x = 0.0
            exit(0)


        if self.prev_state != self.state:
            print(self.state)
        self.prev_state = self.state
        
        self.vel_pub.publish(out_vel)

    def go_state(self, new_state):
        '''
        Add comments
        '''
        self.state = new_state
        self.state_ts = self.get_clock().now()
    
    def check_spin_2_forward(self):
        if self.person_detected:
            return True

    def detect_red_object(self):

        if self.last_rgb_image is None:
            return False

        # Define the threshold for red color in BGR
        red_threshold = 100
        blue_green_max = 50

        # Get the center region of the image
        height, width, _ = self.last_rgb_image.shape
        center_y, center_x = height // 2, width // 2
        region_size = 100  # Size of the square region to check

        start_y = max(0, center_y - region_size // 2)
        end_y = min(height, center_y + region_size // 2)
        start_x = max(0, center_x - region_size // 2)
        end_x = min(width, center_x + region_size // 2)

        center_region = self.last_rgb_image[start_y:end_y, start_x:end_x]

        red_pixels = np.sum((center_region[:,:,2] > red_threshold) & 
                            (center_region[:,:,0] < blue_green_max) & 
                            (center_region[:,:,1] < blue_green_max))

        total_pixels = (end_y - start_y) * (end_x - start_x)
        red_percentage = (red_pixels / total_pixels) * 100

        # Consider it as a red object if more than 30% of the region is red
        return red_percentage > 30


    def check_forward_2_move_left(self):
        '''
        Add comments
        '''
        
        filtered_inf = [x for x in self.last_scan.ranges if not x == float('inf')]
        if len(filtered_inf) == 0:
            return False
        if self.person_size > self.HUMAN_DISTANCE - 30000:
            return False
        
        lidar_obstacle = sum(filtered_inf)/len(filtered_inf) < self.OBSTACLE_DISTANCE
        print(f'scan_avg: {sum(filtered_inf)/len(filtered_inf)}')

        return lidar_obstacle


    def check_forward_2_stop(self):
        '''
        Add comments
        '''
        elapsed = self.get_clock().now() - Time.from_msg(self.last_scan.header.stamp)
        return elapsed > Duration(seconds=self.SCAN_TIMEOUT)

    def check_forward_2_speech(self):
        if self.person_size > self.HUMAN_DISTANCE:
            return True
        else:
            return False
        

    def check_move_left_2_spin(self):
        elapsed = self.get_clock().now() - self.state_ts
        return elapsed > Duration(seconds=self.TURNING_TIME + self.MOVE_LEFT_TIME)

    def check_stop_2_forward(self):
        '''
        Add comments
        '''
        elapsed = self.get_clock().now() - Time.from_msg(self.last_scan.header.stamp)
        return elapsed < Duration(seconds=self.SCAN_TIMEOUT)

    def check_back_2_turn(self):
        '''
        Add comments
        '''
        elapsed = self.get_clock().now() - self.state_ts
        return elapsed > Duration(seconds=self.BACKING_TIME)

    def check_turn_2_forward(self):
        '''
        Add comments
        '''
        elapsed = self.get_clock().now() - self.state_ts
        return elapsed > Duration(seconds=self.TURNING_TIME)
    
    def check_is_obstacle(self):
        '''
        Check if a certain scope in the camera is color red
        '''
        return False
        




def main(args=None):
    print('Hi this is pong soccer node')
    rclpy.init(args=args)

    pong_soccer_node = PongSoccerNode()
    rclpy.spin(pong_soccer_node)

    pong_soccer_node.destroy_node()
    rclpy.shutdown()
    


if __name__ == '__main__':
    main()
