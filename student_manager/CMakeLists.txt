cmake_minimum_required(VERSION 3.13)
project(student_manager)

set(CMAKE_CXX_STANDARD 11)

add_executable(student_manager main.cpp student.cpp student.h manager.cpp manager.h)