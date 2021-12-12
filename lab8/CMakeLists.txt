cmake_minimum_required(VERSION 3.16)
project(Lab8)
set(CMAKE_CXX_STANDARD 17)
include_directories(include)

add_executable(Lab8 src/main.cpp src/lab8note.cpp src/lab8TextNote.cpp src/lab8ListNote.cpp)