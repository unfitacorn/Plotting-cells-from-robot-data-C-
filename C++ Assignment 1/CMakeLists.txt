cmake_minimum_required(VERSION 3.2)
project(C___Assignment_1)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")
set(SOURCE_FILES main.cpp graphHandler.cpp graphHandler.h data.cpp data.h)

add_executable(C___Assignment_1 ${SOURCE_FILES})
