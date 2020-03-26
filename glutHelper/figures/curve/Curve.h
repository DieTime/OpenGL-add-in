#pragma once
#ifndef CURVE_H
#define CURVE_H

#include "../oval/Oval.h"

class Curve : public Oval {
    float start_deg;
    float end_deg;
public:
    Curve(float x, float y, float rx, float ry, float start_deg, float end_deg, const char* hex, float width = 1);
    void draw() override;
};


#endif //CURVE_H
