cmake_minimum_required(VERSION 3.17)
project(tp_Lab_1)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(tp_Lab_1
        include/task1.h
        include/task2.h
        include/task3.h
        include/task4.h
        include/task5.h
        src/main1.cpp
        src/main2.cpp
        src/main3.cpp
        src/main4.cpp
        src/main5.cpp
        src/task1.cpp
        src/task2.cpp
        src/task3.cpp
        src/task4.cpp
        src/task5.cpp)
