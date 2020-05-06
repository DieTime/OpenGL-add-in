#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H

#include "../oval/Oval.h"

class Circle : public Oval {
public:
    Circle() = default;
    Circle(float x, float y, float r, const char* hex, bool fill = false, float w = 1);

    float get_rx() override; // get X axis radius
    float get_ry() override; // get Y axis radius
    float get_radius(); // get global radius

    void set_rx(float rx) override; // set X axis radius
    void set_ry(float ry) override; // set Y axis radius
    void set_radius(float r); // set global radius
};

#endif //CIRCLE_H
