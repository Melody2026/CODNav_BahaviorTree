from launch import LaunchDescription
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import PathJoinSubstitution

def generate_launch_description():

    nav_pose_yaml = PathJoinSubstitution([
        FindPackageShare("cod_behavior"),
        "launch",
        "cod_pose.yaml"
    ])

    behavior_tree_xml = PathJoinSubstitution([
        FindPackageShare("cod_behavior"),
        "cod_bt",
        "singlenav_tree.xml"
    ])

    serial_node = Node(
        package="cod_serial",
        executable="cod_serial",
        name="cod_serial",
        output="screen"
    )

    behavior_node = Node(
        package="cod_behavior",
        executable="tree_1",
        name="cod_behavior",
        output="screen",
        parameters=[
            nav_pose_yaml,
            {"cod_bt_path": behavior_tree_xml}
        ]
    )

    return LaunchDescription([
        serial_node,
        behavior_node
    ])
