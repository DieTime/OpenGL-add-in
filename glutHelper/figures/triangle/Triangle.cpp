#include <cmath>

#include "Triangle.h"

Triangle::Triangle(float x1, float y1, float x2, float y2, float x3, float y3, const char *hex, bool fill, float w)
         :Line(x1, y1, x2, y2, hex, w) {
    this->dx3 = x3 - x;
    this->dy3 = y3 - y;
    this->fill = fill;
}

void Triangle::draw() {
    // Colour setting
    glColor3f(r, g, b);

    // Triangle with no fill
    if (!fill) {

        // Lambda function for finding the area of a triangle
        auto square = [](float ax, float ay, float bx, float by, float cx, float cy) -> float {
            return abs(ax * by + bx * cy + cx * ay - ay * bx - by * cx - cy * ax) / 2;
        };

        // Lambda function for finding distance between two dots
        auto dist = [](float ax, float ay, float bx, float by) -> float {
            return std::sqrt((bx - ax) * (bx - ax) + (by - ay) * (by - ay));
        };

        // Find The Intersection Points E, F
        float ex = (x + dx2) + ((x + dx3) - (x + dx2))
                   / (1 + dist(x, y, (x + dx3), (y + dy3))
                   / dist(x, y, (x + dx2), (y + dy2)));

        float ey = (y + dy2) + ((y + dy3) - (y + dy2))
                   / (1 + dist(x, y, (x + dx3), (y + dy3))
                   / dist(x, y, (x + dx2), (y + dy2)));

        float fx = (x + dx3) + (x - (x + dx3))
                   / (1 + dist(x, y, (x + dx2), (y + dy2))
                   / dist((x + dx3), (y + dy3), (x + dx2), (y + dy2)));

        float fy = (y + dy3) + (y - (y + dy3))
                   / (1 + dist(x, y, (x + dx2), (y + dy2))
                   / dist((x + dx3), (y + dy3), (x + dx2), (y + dy2)));

        // Calculate the denominator
        float div = ((x - ex) * ((y + dy2) - fy) - (y - ey) * ((x + dx2) - fx));

        // Finding center of triangle
        float Ox = ((x * ey - y * ex) * ((x + dx2) - fx) - (x - ex) * ((x + dx2) * fy - (y + dy2) * fx)) / div;
        float Oy = ((x * ey - y * ex) * ((y + dy2) - fy) - (y - ey) * ((x + dx2) * fy - (y + dy2) * fx)) / div;

        // Finding height of triangle
        float h = 2 * square(x, y, (x + dx2), (y + dy2), Ox, Oy) / std::sqrt((x - (x + dx2)) * (x - (x + dx2)) + (y - (y + dy2)) * (y - (y + dy2)));

        // Find the similarity constants of triangles
        float c1 = h / (h - width);
        float c2 = h / (h + width);

        // Drawing a figure
        glBegin(GL_TRIANGLE_STRIP);
            glVertex2f(Ox + (x - Ox) / c2, Oy + (y - Oy) / c2);
            glVertex2f(Ox + (x - Ox) / c1, Oy + (y - Oy) / c1);
            glVertex2f(Ox + ((x + dx2) - Ox) / c2, Oy + ((y + dy2) - Oy) / c2);
            glVertex2f(Ox + ((x + dx2) - Ox) / c1, Oy + ((y + dy2) - Oy) / c1);
            glVertex2f(Ox + ((x + dx3) - Ox) / c2, Oy + ((y + dy3) - Oy) / c2);
            glVertex2f(Ox + ((x + dx3) - Ox) / c1, Oy + ((y + dy3) - Oy) / c1);
            glVertex2f(Ox + (x - Ox) / c2, Oy + (y - Oy) / c2);
            glVertex2f(Ox + (x - Ox) / c1, Oy + (y - Oy) / c1);
        glEnd();

    // Filled triangle
    } else {
        glBegin(GL_TRIANGLES);
            glVertex2f(x, y);
            glVertex2f((x + dx2), (y + dy2));
            glVertex2f((x + dx3), (y + dy3));
        glEnd();
    }
}

float Triangle::getx_three() { return x + dx3; }
float Triangle::gety_three() { return y + dy3; }

void Triangle::setx_three(float X) { dx3 = X - x; }
void Triangle::sety_three(float Y) { dy3 = Y - y; }
