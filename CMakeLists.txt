cmake_minimum_required(VERSION 3.21)
project(learn_opengl)

set(CMAKE_CXX_STANDARD 20)

add_executable(learn_opengl main.cpp glad.c window.h window.cpp engine.h engine.cpp app.h app.cpp learn_opengl.h)

if(UNIX)
    target_link_libraries(learn_opengl -lglfw -lGL -ldl)
endif(UNIX)