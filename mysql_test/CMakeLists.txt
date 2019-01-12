cmake_minimum_required(VERSION 3.13)
project(mysql_test)

set(CMAKE_CXX_STANDARD 11)
set(INC_DIR  D:/mysql_lib/mysql-8.0.13-winx64/mysql-8.0.13-winx64/include)
set(LINK_DIR  D:/mysql_lib/mysql-8.0.13-winx64/mysql-8.0.13-winx64/lib)
include_directories(${INC_DIR})
link_directories(${LINK_DIR})
link_libraries(libmysql.lib)
set(CMAKE_CXX_STANDARD 11)

add_executable(mysql_test main.cpp)
target_link_libraries(mysql_test libmysql.lib)