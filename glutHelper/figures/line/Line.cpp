#include "Line.h"

Line::Line(float x1, float y1, float x2, float y2, const char *hex, float w) : Pixel(x1, y1, hex, w) {
    this->x2 = x2;
    this->y2 = y2;
}

void Line::draw() {
    glColor3f(color.r, color.g, color.b);
    float norm_x = y - y2;
    float norm_y = x2 - x;
    float l = std::sqrt(norm_x * norm_x + norm_y * norm_y);
    norm_x = norm_x / l * width;
    norm_y = norm_y /  l * width;
    glBegin(GL_QUADS);
        glVertex2f(x + norm_x, y + norm_y);
        glVertex2f(x - norm_x, y - norm_y);
        glVertex2f(x2 - norm_x, y2 - norm_y);
        glVertex2f(x2 + norm_x, y2 + norm_y);
    glEnd();
}