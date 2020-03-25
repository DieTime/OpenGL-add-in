#include "Oval.h"

Oval::Oval(float x, float y, float rx, float ry, const char *hex, bool fill, float width) : Pixel(x, y, hex, width) {
    this->rx = rx;
    this->ry = ry;
    this->fill = fill;
}

void Oval::draw() {
    int segments = 50;
    glColor3f(color.r, color.g, color.b);
    if (fill) {
        glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x, y);
        for (int i = 0; i <= segments; i++)   {
            glVertex2f (
                    (x + (rx * cos(i * 6.2831 / segments))),
                    (y + (ry * sin(i * 6.2831 / segments)))
            );
        }
        glEnd();
    } else {
        glLineWidth(width);
        glBegin(GL_LINE_LOOP);
        for (int i = 0; i < segments; i++)   {
            glVertex2f (
                    (x + (rx * cos(i * 6.2831 / segments))),
                    (y + (ry * sin(i * 6.2831 / segments)))
            );
        }
        glEnd();
    }
}


