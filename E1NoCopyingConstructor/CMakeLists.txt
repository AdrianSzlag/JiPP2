cmake_minimum_required(VERSION 3.16)

project(e1NoCopyingConstructor)
include_directories(include)

add_executable(e1NoCopyingConstructor src/main.cpp src/Point.cpp ../lab8/include/lab8note.h ../lab8/src/lab8note.cpp ../lab8/include/lab8TextNote.h ../lab8/src/lab8TextNote.cpp ../lab8/include/lab8ListNote.h ../lab8/src/lab8ListNote.cpp)