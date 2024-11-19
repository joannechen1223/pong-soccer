import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ubuntu/pong-soccer/ros2_ws/install/pong_soccer_pkg'
