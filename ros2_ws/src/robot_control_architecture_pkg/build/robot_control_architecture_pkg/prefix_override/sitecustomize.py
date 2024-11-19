import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ubuntu/lab-3-robot-control-architecture-ii-tortoise-hare/ros2_ws/src/robot_control_architecture_pkg/install/robot_control_architecture_pkg'
