#pragma once
#ifndef PIXEL_H
#define PIXEL_H

#include <GL/glut.h>

#include "../../color/Color.h"
#include "../../interfaces/IDraw.h"
#include "../../interfaces/IMove.h"

class Pixel : public IDraw, public IMove, public Color {
protected:
    float x = 0;
    float y = 0;
    float width = 1;
public:
    Pixel() = default;
    Pixel(float x, float y, const char* hex, float width = 1);

    void draw() override;

    void move(float dx, float dy) override; // move shape on window

    float get_x();
    float get_y();

    void set_x(float x);
    void set_y(float y);
};

#endif //PIXEL_H
