cmake_minimum_required(VERSION 3.13)
project(student_manager)

set(CMAKE_CXX_STANDARD 11)
set(INC_DIR  D:/mysql_lib/mysql-8.0.13-winx64/mysql-8.0.13-winx64/include)
set(LINK_DIR  D:/mysql_lib/mysql-8.0.13-winx64/mysql-8.0.13-winx64/lib)
include_directories(${INC_DIR})
link_directories(${LINK_DIR})
link_libraries(libmysql.dll)


add_executable(student_manager main.cpp student.cpp student.h manager.cpp manager.h)

target_link_libraries(student_manager libmysql.dll)