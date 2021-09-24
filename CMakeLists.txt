cmake_minimum_required(VERSION 2.8)

project(gnl)
set(CMAKE_C_FLAGS ${CMAKE_C_FLAGS} "-Wall -Wextra -Werror -D BUFFER_SIZE=32")
#include_directories(${PROJECT_SOURCE_DIR})
add_executable(${PROJECT_NAME} get_next_line.c get_next_line_utils.c get_next_line.h)

