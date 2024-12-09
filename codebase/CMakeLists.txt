cmake_minimum_required(VERSION 3.22.1)
project(MyCodeBase)

add_library(MyCodeBase STATIC src/codebase.cpp)

target_include_directories(MyCodeBase  PUBLIC include)
