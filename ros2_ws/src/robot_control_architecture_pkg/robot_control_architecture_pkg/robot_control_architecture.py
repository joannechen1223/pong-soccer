import rclpy
from rclpy.duration import Duration
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from rclpy.time import Time
from geometry_msgs.msg import Twist
from sensor_msgs.msg import LaserScan

class BumpGoNode(Node):
    '''
        Add comments
    '''

    def __init__(self):
        '''
        Add comments
        '''
        super().__init__('bump_go')

        self.FORWARD = 0
        self.BACK = 1
        self.TURN = 2
        self.STOP = 3
        self.state = self.FORWARD
        self.state_ts = self.get_clock().now()

        self.prev_state = None

        self.TURNING_TIME = 1.5 # 2 seconds
        self.BACKING_TIME = 2.0 # 2 seconds
        self.SCAN_TIMEOUT = 1.0 # 1 second

        self.SPEED_LINEAR = 0.5
        self.SPEED_ANGULAR = 1.5
        self.OBSTACLE_DISTANCE = 1.2

        self.last_scan = None

        self.scan_sub = self.create_subscription(
            LaserScan,
            'scan',
            self.scan_callback,
            qos_profile_sensor_data)

        self.vel_pub = self.create_publisher(Twist, 'cmd_vel', 10)
        self.timer = self.create_timer(0.05, self.control_cycle)

    def scan_callback(self, msg):
        '''
        Add comments
        '''
        self.last_scan = msg

    def control_cycle(self):
        '''
        Add comments
        '''
        if self.last_scan is None:
            return

        out_vel = Twist()
        

        if self.state == self.FORWARD:
            out_vel.linear.x = self.SPEED_LINEAR
            if self.check_forward_2_back():
                self.go_state(self.BACK)
            if self.check_forward_2_stop():
                self.go_state(self.STOP)
                
        elif self.state == self.BACK:
            out_vel.linear.x = -self.SPEED_LINEAR
            if self.check_back_2_turn():
                self.go_state(self.TURN)

        elif self.state == self.TURN:
            out_vel.angular.z = self.SPEED_ANGULAR

            if self.check_turn_2_forward():
                self.go_state(self.FORWARD)

        elif self.state == self.STOP:
            if self.check_stop_2_forward():
                self.go_state(self.FORWARD)

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

    def check_forward_2_back(self):
        '''
        Add comments
        '''
        filtered_inf = [x for x in self.last_scan.ranges if not x == float('inf')]
        if len(filtered_inf) == 0:
            return False
        # pos = round(len(filtered_inf) / 2)
        # print(f"filtered scan: {filtered_inf} pos: {pos}")
        # return filtered_inf[pos] < self.OBSTACLE_DISTANCE
        print(f'scan_avg: {sum(filtered_inf)/len(filtered_inf)}')
        return sum(filtered_inf)/len(filtered_inf) < self.OBSTACLE_DISTANCE

    def check_forward_2_stop(self):
        '''
        Add comments
        '''
        elapsed = self.get_clock().now() - Time.from_msg(self.last_scan.header.stamp)
        return elapsed > Duration(seconds=self.SCAN_TIMEOUT)

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


def main(args=None):
    rclpy.init(args=args)

    bump_go_node = BumpGoNode()

    rclpy.spin(bump_go_node)

    bump_go_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()