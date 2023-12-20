cmake_minimum_required(VERSION 3.20.0)
project(hello_world VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(NOT CMAKE_BUILD_TYPE OR (NOT CMAKE_BUILD_TYPE STREQUAL "Debug" AND NOT CMAKE_BUILD_TYPE STREQUAL "Release"))
    set(CMAKE_BUILD_TYPE Debug CACHE STRING "Please select the build type (Debug or Release). If not specified, 'Debug' will be used by default" FORCE)
endif()

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
  message("Setting for Debug mode")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g") # this option is only compatible with CLANG, for GCC user "-ggdb"
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic-errors -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -Werror")
endif()

if(CMAKE_BUILD_TYPE STREQUAL "Release")
  message("Setting for Release mode")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2")
  add_definitions(-DNDEBUG)
endif()


configure_file(src/config.h.in src/config.h)
add_subdirectory(src/MathFunctions)
add_executable(hello-world src/main.cpp)

target_link_libraries(hello-world PRIVATE MathFunctions)
target_include_directories(hello-world PRIVATE ${CMAKE_BINARY_DIR})
target_include_directories(hello-world PRIVATE "${PROJECT_BINARY_DIR}" "${PROJECT_SOURCE_DIR}/src/MathFunctions")

