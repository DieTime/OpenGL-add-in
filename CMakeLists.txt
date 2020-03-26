cmake_minimum_required(VERSION 3.10)
project(glutHelper)

set(CMAKE_CXX_STANDARD 11)

add_executable(
        glutHelper main.cpp glutHelper/helper.h glutHelper/figures/figures.h
        glutHelper/figures/pixel/Pixel.cpp glutHelper/figures/pixel/Pixel.h
        glutHelper/color/Color.cpp glutHelper/color/Color.h glutHelper/interfaces/IDraw.h
        glutHelper/figures/line/Line.cpp glutHelper/figures/line/Line.h
        glutHelper/figures/triangle/Triangle.cpp glutHelper/figures/triangle/Triangle.h
        glutHelper/figures/circle/Circle.cpp glutHelper/figures/circle/Circle.h
        glutHelper/figures/rect/Rect.cpp glutHelper/figures/rect/Rect.h
        glutHelper/figures/square/Square.cpp glutHelper/figures/square/Square.h
        glutHelper/figures/oval/Oval.cpp glutHelper/figures/oval/Oval.h
        glutHelper/figures/curve/Curve.cpp glutHelper/figures/curve/Curve.h)

target_link_libraries(glutHelper -lOpenGL32 -lfreeGLUT -lGLU32)