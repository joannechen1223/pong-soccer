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

        self.STOP = 0
        self.MOVE_RED = 2
        self.MOVE_BLUE = 3
        self.RED_WIN = 4
        self.BLUE_WIN = 5
        
        

        self.state = self.STOP
        self.state_ts = self.get_clock().now()

        self.prev_state = None
        self.prev_move_state = None

        self.position = 0
        self.red_move_distance = 1
        self.blue_move_distance = 1
        self.RED_GOAL_POSITION = 3
        self.BLUE_GOAL_POSITION = -3

        self.FORWARD_TIME = 3.0
        self.STOP_TIME = 2.0
        self.TURNING_TIME = 2.4

        self.SPEED_LINEAR = 0.3
        self.SPEED_ANGULAR = 0.5

        self.vel_pub = self.create_publisher(Twist, 'cmd_vel', 10)
        self.timer = self.create_timer(0.05, self.control_cycle)

    def control_cycle(self):

        out_vel = Twist()
    
        if self.state == self.STOP:
            out_vel.linear.x = 0.0
            out_vel.angular.z = 0.0
            if self.check_stop_2_move_red():
                print('Stop ==> Move Red')
                self.go_state(self.MOVE_RED)
            elif self.check_stop_2_move_blue():
                print('Stop ==> Move Blue')
                self.go_state(self.MOVE_BLUE)
        
        if self.state == self.MOVE_RED:
            if self.prev_move_state != self.MOVE_RED:
                # turn 180 degrees
                elapsed = self.get_clock().now() - self.state_ts
                if elapsed < Duration(seconds=self.TURNING_TIME):
                    out_vel.angular.z = self.SPEED_ANGULAR
                else:
                    out_vel.linear.x = self.SPEED_LINEAR
            else:
                out_vel.linear.x = self.SPEED_LINEAR
            
            if self.check_move_red_2_stop():
                print("Move Red ==> Stop")
                self.prev_move_state = self.MOVE_RED
                self.position = self.position + self.red_move_distance
                self.go_state(self.STOP)
            elif self.check_move_red_2_win():
                print("Move Red ==> Red Win")
                self.go_state(self.RED_WIN)
        
        if self.state == self.MOVE_BLUE:
            if self.prev_move_state != self.MOVE_BLUE:
                # turn 180 degrees
                elapsed = self.get_clock().now() - self.state_ts
                if elapsed < Duration(seconds=self.TURNING_TIME):
                    out_vel.angular.z = self.SPEED_ANGULAR
                else:
                    out_vel.linear.x = self.SPEED_LINEAR
            else:
                out_vel.linear.x = self.SPEED_LINEAR
            
            if self.check_move_blue_2_stop():
                print("Move Blue ==> Stop")
                self.prev_move_state = self.MOVE_BLUE
                self.position = self.position + self.blue_move_distance
                self.go_state(self.STOP)
            elif self.check_move_blue_2_win():
                print("Move Blue ==> Blue Win")
                self.go_state(self.BLUE_WIN)

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

    def check_stop_2_move_blue(self):
        # TODO
        return False
    
    def check_stop_2_move_red(self):
        # TODO
        return False

    def check_move_blue_2_stop(self):
        # TODO
        return False

    def check_move_red_2_stop(self):
        # TODO
        return False
    
    def check_move_red_2_win(self):
        # TODO
        return False

    def check_move_blue_2_win(self):
        # TODO
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
