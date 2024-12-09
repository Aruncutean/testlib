cmake_minimum_required(VERSION 3.29)
project(MultiPlatformProject)


add_subdirectory(codebase)


if(ANDROID)
    add_subdirectory(android/app/src/main/cpp)
elseif(WIN32)
    add_subdirectory(windows)
endif()