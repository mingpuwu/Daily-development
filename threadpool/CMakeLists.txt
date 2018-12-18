cmake_minimum_required(VERSION 3.10)
project(threadpool)

set(CMAKE_CXX_STANDARD 11)

add_executable(threadpool main.cpp C-Thread-Pool-master/thpool.c C-Thread-Pool-master/thpool.h)