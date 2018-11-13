cmake_minimum_required(VERSION 3.12)
project(hello01 C)

set(CMAKE_C_STANDARD 99)

add_executable(hello01 main.c circle.c new.c)