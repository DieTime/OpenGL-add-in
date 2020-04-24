#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H

#include "../oval/Oval.h"

class Circle : public Oval {
public:
    Circle() = default;
    Circle(float x, float y, float r, const char* hex, bool fill = false, float w = 1);

    float get_rx() override;
    float get_ry() override;
    float get_radius();

    void set_rx(float rx) override;
    void set_ry(float ry) override;
    void set_radius(float r);
};

#endif //CIRCLE_H
