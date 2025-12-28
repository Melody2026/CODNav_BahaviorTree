cmake_minimum_required(VERSION 3.8...3.31)
project(cod_behavior)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(behaviortree_cpp REQUIRED)
find_package(nav2_msgs REQUIRED)
find_package(example_interfaces REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rm_interfaces REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)

add_executable(cod_behavior src/sentry_behavior.cpp)
add_executable(checkNavResult src/CheckNavResult.cpp)
add_executable(tree_1 src/tree_1.cpp)
add_executable(msgtest test/msgTest.cpp)
add_executable(test_1 test/test1_FullStatus.cpp)
add_executable(test_2 test/test2_PoorStatus.cpp)



ament_target_dependencies(cod_behavior
        rclcpp
        nav2_msgs
        behaviortree_cpp
        example_interfaces
        rclcpp_action
        rm_interfaces
        geometry_msgs

)
ament_target_dependencies(checkNavResult
        rclcpp
        nav2_msgs
        example_interfaces
        rclcpp_action
        geometry_msgs
)
ament_target_dependencies(tree_1
        rclcpp
        nav2_msgs
        example_interfaces
        rclcpp_action
        geometry_msgs
        behaviortree_cpp
        rm_interfaces
        tf2_geometry_msgs
)
ament_target_dependencies(msgtest
        rm_interfaces
        rclcpp
)
ament_target_dependencies(test_1
        rm_interfaces
        rclcpp
)
ament_target_dependencies(test_2
        rm_interfaces
        rclcpp
)

include_directories(
        include
)

install(TARGETS cod_behavior
        DESTINATION lib/${PROJECT_NAME}
)
install(TARGETS checkNavResult
        DESTINATION lib/${PROJECT_NAME}
)
install(TARGETS tree_1
        DESTINATION lib/${PROJECT_NAME}
)
install(TARGETS msgtest
        DESTINATION lib/${PROJECT_NAME}
)
install(TARGETS test_1
        DESTINATION lib/${PROJECT_NAME}
)
install(TARGETS test_2
        DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY
        launch
        DESTINATION share/${PROJECT_NAME}
)
ament_package()