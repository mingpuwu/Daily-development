cmake_minimum_required(VERSION 3.10)
project(virtual)

set(CMAKE_CXX_STANDARD 11)

add_executable(virtual main.cpp base_class.cpp base_class.h human_class.cpp human_class.h)