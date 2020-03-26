//
// Created by Denis on 25.03.2020.
//

#include "Rect.h"

Rect::Rect(float x, float y, float h, float w, const char *hex, bool fill, float width) : Pixel(x, y, hex, width) {
    this->h = h;
    this->w = w;
    this->fill = fill;
}

void Rect::draw() {
    glColor3f(color.r, color.g, color.b);
    if (!fill) {
        glBegin(GL_TRIANGLE_STRIP);
            glVertex2f(x - w / 2 - width, y - h / 2 - width);
            glVertex2f(x - w / 2 + width, y - h / 2 + width);
            glVertex2f(x - w / 2 - width, y + h / 2 + width);
            glVertex2f(x - w / 2 + width, y + h / 2 - width);
            glVertex2f(x + w / 2 + width, y + h / 2 + width);
            glVertex2f(x + w / 2 - width, y + h / 2 - width);
            glVertex2f(x + w / 2 + width, y - h / 2 - width);
            glVertex2f(x + w / 2 - width, y - h / 2 + width);
            glVertex2f(x - w / 2 + width, y - h / 2 + width);
            glVertex2f(x - w / 2 - width, y - h / 2 - width);
            glVertex2f(x + w / 2 + width, y - h / 2 - width);
        glEnd();
    } else {
        glBegin(GL_QUADS);
            glVertex2f(x - w / 2, y - h / 2);
            glVertex2f(x - w / 2, y + h / 2);
            glVertex2f(x + w / 2, y + h / 2);
            glVertex2f(x + w / 2, y - h / 2);
        glEnd();
    }
}
