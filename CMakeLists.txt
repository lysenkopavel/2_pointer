cmake_minimum_required(VERSION 3.8)
project(2_pointer)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp header.h sortBubble.cpp workWithArray.cpp quickSort.cpp)
add_executable(2_pointer ${SOURCE_FILES})