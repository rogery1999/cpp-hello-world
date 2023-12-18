configure_file(config.h.in config.h)
add_executable(hello-world main.cpp)

add_subdirectory(MathFunctions)

target_link_libraries(hello-world MathFunctions)
target_include_directories(hello-world PUBLIC ${CMAKE_BINARY_DIR})