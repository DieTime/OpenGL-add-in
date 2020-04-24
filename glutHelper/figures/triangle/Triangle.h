#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <cmath>

#include "../line/Line.h"
#include "../../interfaces/IFill.h"

class Triangle : public Line, public IFill {
protected:
    float dx3 = 0;
    float dy3 = 0;
public:
    Triangle() = default;
    Triangle(float x1, float y1, float x2, float y2, float x3, float y3, const char *hex, bool fill = false, float w = 1);

    void draw() override;

    float getx_three();
    float gety_three();

    void setx_three(float x);
    void sety_three(float y);
};


#endif //TRIANGLE_H
