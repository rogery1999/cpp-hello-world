cmake_minimum_required(VERSION 3.20.0)
project(hello_world VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)

configure_file(src/config.h.in src/config.h)

add_executable(hello-world src/main.cpp)
target_include_directories(hello-world PUBLIC ${CMAKE_BINARY_DIR})