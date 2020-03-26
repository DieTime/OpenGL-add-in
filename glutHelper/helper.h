#pragma once
#include <GL/glut.h>
#include "figures/figures.h"

static int DELAY;
static float SCENE_WIDTH;
static float SCENE_HEIGHT;

void glRedraw(int) {
    glutPostRedisplay();
    glutTimerFunc(DELAY, glRedraw, 0);
    glutSwapBuffers();
    glClear(GL_COLOR_BUFFER_BIT);
}

void CreateGL(int width, int height, const char* title, const char* bg_color, int fps, void draw_func()) {
    int argc = 1; char* argv;
    Color color(bg_color);
    DELAY = 1000 / fps;
    SCENE_WIDTH = (float)width;
    SCENE_HEIGHT = (float)height;
    glutInit(&argc, &argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(width, height);
    glutInitWindowPosition(200, 200);
    glutCreateWindow(title);
    glClearColor(color.r, color.g, color.b, 1);
    gluOrtho2D(0, width, height, 0);
    glutDisplayFunc(draw_func);
    glRedraw(0);
    glutMainLoop();
}