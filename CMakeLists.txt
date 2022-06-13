cmake_minimum_required(VERSION 3.21)
project(learn_opengl)

set(CMAKE_CXX_STANDARD 20)

add_executable(learn_opengl main.cpp)

add_subdirectory(engine)

target_link_libraries(learn_opengl engine)