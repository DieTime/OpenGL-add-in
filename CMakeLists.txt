cmake_minimum_required(VERSION 3.15)
project(glutHelper)

set(CMAKE_CXX_STANDARD 14)

file(GLOB_RECURSE FIGURES_FILES glutHelper/**.cpp glutHelper/**.h)

add_executable(glutHelper main.cpp ${FIGURES_FILES})

target_link_libraries(glutHelper -lOpenGL32 -lfreeGLUT -lGLU32)