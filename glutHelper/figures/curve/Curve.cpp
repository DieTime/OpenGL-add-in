#include <cmath>

#include "Curve.h"

Curve::Curve(float x, float y, float rx, float ry, float start_deg, float end_deg,
             const char *hex, float width) : Oval(x, y, rx, ry, hex, false, width) {
    if (start_deg > end_deg) {
        this->start_deg = end_deg * 3.1415f / 180.f;
        this->end_deg = start_deg * 3.1415f / 180.f;
    } else {
        this->start_deg = start_deg * 3.1415f / 180.f;
        this->end_deg = end_deg * 3.1415f / 180.f;
    }
}

void Curve::draw() {
    // Number of body segments
    const int segments = 50;

    // Colour setting
    glColor3f(r, g, b);

    // Inner oval
    float rx1 = rx - width;
    float ry1 = ry - width;

    // Outer oval
    float rx2 = rx + width;
    float ry2 = ry + width;

    // Drawing a figure
    glBegin(GL_TRIANGLE_STRIP);
    for (float i = start_deg; i < end_deg; i += 2 * M_PI / (float)segments)   {
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