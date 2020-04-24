#pragma once

#include <GL/glut.h>

#include "./figures/pixel/Pixel.h"
#include "./figures/line/Line.h"
#include "./figures/triangle/Triangle.h"
#include "./figures/oval/Oval.h"
#include "./figures/curve/Curve.h"
#include "./figures/circle/Circle.h"
#include "./figures/rect/Rect.h"
#include "./figures/square/Square.h"

// Delay for setting FPS
static unsigned int frameDelay;

// Redraw the window with the specified fps
void glRedraw(int) {
    glutPostRedisplay();
    glutTimerFunc(frameDelay, glRedraw, 0);
    glutSwapBuffers();
    glClear(GL_COLOR_BUFFER_BIT);
}

// Window initialization
void CreateGL(int width, int height, const char* title, const char* bg, unsigned int fps, void func()) {
    // Arguments to initialize the window
    int argc = 0; char* argv = nullptr;

    // Background color
    Color color(bg);

    // Compute delay between frames
    frameDelay = 1000 / fps;

    // Initialize the window and render cycle
    glutInit(&argc, &argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(width, height);
    glutInitWindowPosition(200, 200);
    glutCreateWindow(title);
    glClearColor(color.get_r(), color.get_g(), color.get_b(), 1);
    gluOrtho2D(0, width, height, 0);
    glutDisplayFunc(func);
    glRedraw(0);
    glutMainLoop();
}