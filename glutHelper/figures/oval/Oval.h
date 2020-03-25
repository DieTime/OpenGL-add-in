#pragma once
#ifndef OVAL_H
#define OVAL_H

#include <cmath>
#include "../Pixel/Pixel.h"

class Oval : public Pixel {
protected:
    float rx;
    float ry;
    bool fill;
public:
    Oval(float x, float y, float rx, float ry, const char* hex, bool fill = false, float width = 1);
    void draw() override;
};

#endif //OVAL_H
