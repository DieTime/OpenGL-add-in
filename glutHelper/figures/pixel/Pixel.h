#pragma once
#ifndef PIXEL_H
#define PIXEL_H

#include <GL/glut.h>
#include "../../Color/Color.h"
#include "../../Interfaces/IDraw.h"

class Pixel : public IDraw {
protected:
    float x;
    float y;
    Color color;
    float width;
public:
    Pixel();
    Pixel(float x, float y, const char* hex, float w = 1);
    void draw() override;
};


#endif //PIXEL_H
