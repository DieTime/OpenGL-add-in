#include "Line.h"

Line::Line(float x1, float y1, float x2, float y2,
           const char *hex, float w) : Pixel(x1, y1, hex, w) {
    this->dx2 = x2 - x;
    this->dy2 = y2 - y;
}

void Line::draw() {
    // Colour setting
    glColor3f(r, g, b);

    // Finding a normal vector
    float norm_x = y - (y + dy2);
    float norm_y = (x + dx2) - x;

    // Moving the normal vector to a single one
    float l = std::sqrt(norm_x * norm_x + norm_y * norm_y);
    norm_x = norm_x / l * width;
    norm_y = norm_y / l * width;

    // Drawing a figure
    glBegin(GL_QUADS);
        glVertex2f(x + norm_x, y + norm_y);
        glVertex2f(x - norm_x, y - norm_y);
        glVertex2f((x + dx2) - norm_x, (y + dy2) - norm_y);
        glVertex2f((x + dx2) + norm_x, (y + dy2) + norm_y);
    glEnd();
}

float Line::getx_two() { return (x + dx2); }
float Line::gety_two() { return (y + dy2); }

void Line::setx_two(float X) { dx2 = X - x; }
void Line::sety_two(float Y) { dy2 = Y - y; }