cmake_minimum_required(VERSION 3.29)
project(WindowsApp)

add_executable(WindowsApp main.cpp)


target_link_libraries(WindowsApp PRIVATE MyCodeBase)