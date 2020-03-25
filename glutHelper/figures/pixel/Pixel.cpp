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
    glPointSize(width);
    glColor3f(color.r, color.g, color.b);
    glBegin(GL_POINTS);
        glVertex2f(x, y);
    glEnd();
};