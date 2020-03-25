#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "../Line/Line.h"

class Triangle : public Line {
protected:
    float x3;
    float y3;
    bool fill;
public:
    Triangle(float x1, float y1, float x2, float y2, float x3, float y3, const char *hex, bool fill = false, float w = 1);
    void draw() override;
};


#endif //TRIANGLE_H
