cmake_minimum_required(VERSION 3.8)
project(cod_serial)

find_package(Eigen3 REQUIRED)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(cod_serial src/cod_serial.cpp src/uart_transporter.cpp)

target_link_libraries(cod_serial
    Eigen3::Eigen
)