#include "Pixel.h"

Pixel::Pixel() {
    x = 0;
    y = 0;
    width = 1;
}

Pixel::Pixel(float x, float y, const char *hex, float w) {
    this->x = x;
    this->y = y;
    width = w;
    color = Color(hex);
}

void Pixel::draw(){
    glColor3f(color.r, color.g, color.b);
    glBegin(GL_QUADS);
        glVertex2f(x - width, y - width);
        glVertex2f(x - width, y + width);
        glVertex2f(x + width, y + width);
        glVertex2f(x + width, y - width);
    glEnd();
};