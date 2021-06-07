cmake_minimum_required(VERSION 3.19)
project(rgz)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(rgz        src/guitar.cpp        src/guitar.h        src/list.cpp        src/list.h        src/main.cpp  src/menu.h  src/menu.cpp)

