import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ubuntu/lab-3-robot-control-architecture-ii-tortoise-hare/ros2_ws/src/install/bump_n_go_pkg'
