cmake_minimum_required(VERSION 3.16)
project(Lab6)
set(CMAKE_CXX_STANDARD 17)
include_directories(include)

add_executable(Lab6 src/main.cpp include/node.h src/node.cpp)