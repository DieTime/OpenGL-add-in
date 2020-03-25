#include <GL/glut.h>
#include "Figures/figures.h"

static int delay;

void glRedraw(int) {
    glutPostRedisplay();
    glutTimerFunc(delay, glRedraw, 0);
    glutSwapBuffers();
    glClear(GL_COLOR_BUFFER_BIT);
}

void CreateGL(int width, int height, const char* title, const char* bg_color, int fps, void draw_func()) {
    int argc = 1; char* argv;
    Color color(bg_color);
    delay = 1000 / fps;
    glutInit(&argc, &argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(width, height);
    glutInitWindowPosition(200, 200);
    glutCreateWindow(title);
    glClearColor(color.r, color.g, color.b, 1);
    glOrtho(-1, 1, -1, 1, 0, 0);
    glutDisplayFunc(draw_func);
    glRedraw(0);
    glutMainLoop();
}