#include "Line.h"

Line::Line(float x1, float y1, float x2, float y2, const char *hex, float w) {
    x = x1;
    y = y1;
    this->x2 = x2;
    this->y2 = y2;
    color = Color(hex);
    width = w;
}

void Line::draw() {
    glLineWidth(width);
    glColor3f(color.r, color.g, color.b);
    glBegin(GL_LINES);
        glVertex2f(x, y);
        glVertex2f(x2, y2);
    glEnd();
}