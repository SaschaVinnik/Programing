cmake_minimum_required(VERSION 3.19)
project(lab19 C)

set(CMAKE_C_STANDARD 11)

include_directories(src)

add_executable(lab19
        src/guitar.c
        src/guitar.h
        src/list.c
        src/list.h
        src/main.c
        )
