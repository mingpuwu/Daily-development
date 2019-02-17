cmake_minimum_required(VERSION 3.13)
project(AVN_client)

set(CMAKE_CXX_STANDARD 11)

add_executable(AVN_client main.cpp data.cpp data.h octstr.cpp octstr.h)