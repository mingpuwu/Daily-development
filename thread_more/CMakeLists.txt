cmake_minimum_required(VERSION 3.10)
project(thread_more)

set(CMAKE_CXX_STANDARD 11)

add_executable(thread_more main.cpp thread_class.cpp thread_class.h)