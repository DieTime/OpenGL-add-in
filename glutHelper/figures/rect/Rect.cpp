#include "Rect.h"

Rect::Rect(float x, float y, float h, float w, const char *hex, bool fill, float width) : Pixel(x, y, hex, width) {
    this->h = h;
    this->w = w;
    this->fill = fill;
}

void Rect::draw() {
    // Color setting
    glColor3f(r, g, b);

    // Rectangle with no fill
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

    // Filled rectangle
    } else {
        glBegin(GL_QUADS);
            glVertex2f(x - w / 2, y - h / 2);
            glVertex2f(x - w / 2, y + h / 2);
            glVertex2f(x + w / 2, y + h / 2);
            glVertex2f(x + w / 2, y - h / 2);
        glEnd();
    }
}

float Rect::get_h() { return h; }
float Rect::get_w() { return w; }

void Rect::set_h(float H) { h = H; }
void Rect::set_w(float W) { w = W; }
