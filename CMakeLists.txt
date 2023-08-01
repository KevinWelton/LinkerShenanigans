cmake_minimum_required(VERSION 3.26)
project(LinkerShenanigans)

set(CMAKE_CXX_STANDARD 17)

add_executable(LinkerShenanigans main.cpp)
add_library(SharedLib SHARED SharedLib.cpp SharedLib.h)

target_link_libraries(LinkerShenanigans SharedLib)
