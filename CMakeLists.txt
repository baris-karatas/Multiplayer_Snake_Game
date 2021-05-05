cmake_minimum_required(VERSION 3.17)
project(snake2)

set(CMAKE_CXX_STANDARD 14)
find_package(Threads)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")
add_executable(snake2 main.cpp Snake.cpp Snake.h Map.cpp Map.h Point.cpp Point.h)
