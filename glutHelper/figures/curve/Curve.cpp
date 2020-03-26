#include <cmath>
#include "Curve.h"

Curve::Curve(float x, float y, float rx, float ry, float start_deg, float end_deg, const char *hex, float width) : Oval(x, y, rx, ry, hex, false, width) {
    if (start_deg > end_deg) {
        this->start_deg = end_deg * 3.1415f / 180.f;
        this->end_deg = start_deg * 3.1415f / 180.f;
    } else {
        this->start_deg = start_deg * 3.1415f / 180.f;
        this->end_deg = end_deg * 3.1415f / 180.f;
    }
}

void Curve::draw() {
    int segments = 50;
    glColor3f(color.r, color.g, color.b);
    float rx1 = rx - width;
    float rx2 = rx + width;
    float ry1 = ry - width;
    float ry2 = ry + width;
    glBegin(GL_TRIANGLE_STRIP);
    for (float i = start_deg; i < end_deg; i += 6.2831f / (float)segments)   {
        glVertex2f (
                (x + rx1 * std::cos(i)),
                (y - ry1 * std::sin(i))
        );
        glVertex2f (
                (x + rx2 * std::cos(i)),
                (y - ry2 * std::sin(i))
        );
    }
    glEnd();
}
