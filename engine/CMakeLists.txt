cmake_minimum_required(VERSION 3.21)
project(engine)

set(CMAKE_CXX_STANDARD 20)

set(engine_files
        engine.h
        engine.cpp
        application.h
        application.cpp
        learn_opengl.h
)

add_subdirectory(platform)

add_library(engine ${engine_files})

if(UNIX)
    target_link_libraries(engine -lGL -ldl platform)
endif(UNIX)