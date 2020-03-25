#include "Triangle.h"

Triangle::Triangle(float x1, float y1, float x2, float y2, float x3, float y3, const char *hex, bool fill, float w) : Line(x1, y1, x2, y2, hex, w) {
    this->x3 = x3;
    this->y3 = y3;
    this->fill = fill;
}

void Triangle::draw() {
    glColor3f(color.r, color.g, color.b);
    if (!fill) {
        glLineWidth(width);
        glBegin(GL_LINES);
            glVertex2f(x, y);
            glVertex2f(x2, y2);
        glEnd();
        glBegin(GL_LINES);
            glVertex2f(x, y);
            glVertex2f(x3, y3);
        glEnd();
        glBegin(GL_LINES);
            glVertex2f(x2, y2);
            glVertex2f(x3, y3);
        glEnd();
    } else {
        glBegin(GL_TRIANGLES);
            glVertex2f(x, y);
            glVertex2f(x2, y2);
            glVertex2f(x3, y3);
        glEnd();
    }
}
