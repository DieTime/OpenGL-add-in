#include "Triangle.h"

#include <cmath>
#include <utility>

Triangle::Triangle(float x1, float y1, float x2, float y2, float x3, float y3, const char *hex, bool fill, float w)
        : Line(x1, y1, x2, y2, hex, w) {
    this->x3 = x3;
    this->y3 = y3;
    this->fill = fill;
}

void Triangle::draw() {
    glColor3f(color.r, color.g, color.b);
    if (!fill) {
        auto square = [](float ax, float ay, float bx, float by, float cx, float cy) -> float {
            return abs(ax * by + bx * cy + cx * ay - ay * bx - by * cx - cy * ax) / 2;
        };

        auto dist = [](float ax, float ay, float bx, float by) -> float {
            return std::sqrt((bx - ax) * (bx - ax) + (by - ay) * (by - ay));
        };

        float ex = x2 + (x3 - x2) / (1 + dist(x, y, x3, y3) / dist(x, y, x2, y2));
        float ey = y2 + (y3 - y2) / (1 + dist(x, y, x3, y3) / dist(x, y, x2, y2));
        float fx = x3 + (x - x3) / (1 + dist(x, y, x2, y2) / dist(x3, y3, x2, y2));
        float fy = y3 + (y - y3) / (1 + dist(x, y, x2, y2) / dist(x3, y3, x2, y2));

        float div = ((x - ex) * (y2 - fy) - (y - ey) * (x2 - fx));
        float Ox = ((x * ey - y * ex) * (x2 - fx) - (x - ex) * (x2 * fy - y2 * fx)) / div;
        float Oy = ((x * ey - y * ex) * (y2 - fy) - (y - ey) * (x2 * fy - y2 * fx)) / div;

        float h = 2 * square(x, y, x2, y2, Ox, Oy) / std::sqrt((x - x2) * (x - x2) + (y - y2) * (y - y2));
        float c1 = h / (h - width);
        float c2 = h / (h + width);

        glBegin(GL_TRIANGLE_STRIP);
            glVertex2f(Ox + (x - Ox) / c2, Oy + (y - Oy) / c2);
            glVertex2f(Ox + (x - Ox) / c1, Oy + (y - Oy) / c1);
            glVertex2f(Ox + (x2 - Ox) / c2, Oy + (y2 - Oy) / c2);
            glVertex2f(Ox + (x2 - Ox) / c1, Oy + (y2 - Oy) / c1);
            glVertex2f(Ox + (x3 - Ox) / c2, Oy + (y3 - Oy) / c2);
            glVertex2f(Ox + (x3 - Ox) / c1, Oy + (y3 - Oy) / c1);
            glVertex2f(Ox + (x - Ox) / c2, Oy + (y - Oy) / c2);
            glVertex2f(Ox + (x - Ox) / c1, Oy + (y - Oy) / c1);
        glEnd();
    } else {
        glBegin(GL_TRIANGLES);
            glVertex2f(x, y);
            glVertex2f(x2, y2);
            glVertex2f(x3, y3);
        glEnd();
    }
}
