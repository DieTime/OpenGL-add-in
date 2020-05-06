#pragma once
#ifndef RECT_H
#define RECT_H

#include "../pixel/Pixel.h"
#include "../../interfaces/IFill.h"

class Rect : public Pixel, public IFill {
protected:
    float h; // Rectangle height
    float w; // Rectangle width
public:
    Rect(float x, float y, float h, float w, const char* hex, bool fill = false, float width = 1);

    void draw() override;

    virtual float get_h(); // get height
    virtual float get_w(); // get width

    virtual void set_h(float H); // set height
    virtual void set_w(float W); // set width
};

#endif //RECT_H
