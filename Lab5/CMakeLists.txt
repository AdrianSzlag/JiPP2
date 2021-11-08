cmake_minimum_required(VERSION 3.16)
project(Lab5_1)
set(CMAKE_CXX_STANDARD 17)
include_directories(include)

add_executable(Lab5_1 src/main.cpp include/class.h src/class.cpp)