#pragma once
#ifndef OVAL_H
#define OVAL_H

#include <cmath>

#include "../pixel/Pixel.h"
#include "../../interfaces/IFill.h"

class Oval : public Pixel, public IFill {
protected:
    float rx = 0; // Radius in the X axis
    float ry = 0; // Radius in the Y axis
public:
    Oval() = default;
    Oval(float x, float y, float rx, float ry, const char* hex, bool fill = false, float width = 1);

    void draw() override;

    virtual float get_rx();
    virtual float get_ry();

    virtual void set_rx(float rx);
    virtual void set_ry(float ry);
};

#endif //OVAL_H
