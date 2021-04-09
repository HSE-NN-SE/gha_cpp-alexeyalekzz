cmake_minimum_required(VERSION 3.17)
project(tp_Lab_1)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(tp_Lab_1
        include/task1.h
        src/main1.cpp
        src/task1.cpp)
