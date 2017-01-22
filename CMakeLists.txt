cmake_minimum_required(VERSION 2.8)
option(build_tests "Build unit tests")

project(curveture)

include_directories(include)

add_definitions(-std=c++11
                -g
                )

add_subdirectory(src)
add_subdirectory(test)
