#include "Pixel.h"

Pixel::Pixel(float x, float y, const char *hex, float width) {
    this->x = x;
    this->y = y;
    this->width = width;
    this->setColor(hex);
}

void Pixel::draw() {
    // Colour setting
    glColor3f(r, g, b);

    // Drawing a figure
    glBegin(GL_QUADS);
        glVertex2f(x - width, y - width);
        glVertex2f(x - width, y + width);
        glVertex2f(x + width, y + width);
        glVertex2f(x + width, y - width);
    glEnd();
}

// Coordinate change
void Pixel::move(float dx, float dy) {
    x += dx;
    y += dy;
}

float Pixel::get_x() { return x; }
float Pixel::get_y() { return y; }

void Pixel::set_x(float X) { x = X; }
void Pixel::set_y(float Y) { y = Y; }

