#pragma once
#ifndef RECT_H
#define RECT_H

#include "../pixel/Pixel.h"

class Rect : public Pixel {
protected:
    float h;
    float w;
    bool fill;
public:
    Rect(float x, float y, float h, float w, const char* hex, bool fill = false, float width = 1);
    void draw() override;
};

#endif //RECT_H
