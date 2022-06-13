cmake_minimum_required(VERSION 3.21)
project(platform)

set(CMAKE_CXX_STANDARD 20)

set(platform_files
        glad.c
        window.cpp
        window.h
)

add_library(platform ${platform_files})

if(UNIX)
    target_link_libraries(platform -lglfw -lGL -ldl)
endif(UNIX)