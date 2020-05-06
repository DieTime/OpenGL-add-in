#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <cmath>

#include "../line/Line.h"
#include "../../interfaces/IFill.h"

class Triangle : public Line, public IFill {
protected:
    float dx3 = 0; // X axis dist of the third point relative to the first
    float dy3 = 0; // Y axis dist of the third point relative to the first
public:
    Triangle() = default;
    Triangle(float x1, float y1, float x2, float y2, float x3, float y3, const char *hex, bool fill = false, float w = 1);

    void draw() override;

    float get_x3();
    float get_y3();

    void set_x3(float x);
    void set_y3(float y);
};


#endif //TRIANGLE_H
