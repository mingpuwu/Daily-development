cmake_minimum_required(VERSION 3.10)
project(uthash_c C)

set(CMAKE_C_STANDARD 99)

add_executable(uthash_c hash_test.c uthash.h)