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
        float rx1 = rx - width;
        float rx2 = rx + width;
        float ry1 = ry - width;
        float ry2 = ry + width;
        glBegin(GL_TRIANGLE_STRIP);
        for (int i = 0; i <= segments; i++)   {
            glVertex2f (
                    (x + (rx1 * cos(i * 6.2831 / segments))),
                    (y + (ry1 * sin(i * 6.2831 / segments)))
            );
            glVertex2f (
                    (x + (rx2 * cos(i * 6.2831 / segments))),
                    (y + (ry2 * sin(i * 6.2831 / segments)))
            );
        }
        glEnd();
    }
}


