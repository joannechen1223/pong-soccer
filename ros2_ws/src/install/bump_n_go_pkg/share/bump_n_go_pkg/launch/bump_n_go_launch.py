from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():

    kobuki_cmd = Node(package='bump_n_go_pkg',
                      executable='bump_n_go_node',
                      )

    ld = LaunchDescription()
    ld.add_action(kobuki_cmd)

    return ld
