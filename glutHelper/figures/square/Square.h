#pragma once
#ifndef SQUARE_H
#define SQUARE_H

#include "../rect/Rect.h"

class Square : public Rect {
public:
    Square(float x, float y, float l, const char* hex, bool fill = false, float width = 1);

    float get_h() override; // get height
    float get_w() override; // get width
    float get_side_len();

    void set_h(float H) override; // set height
    void set_w(float W) override; // set width
    void set_side_len(float L);
};


#endif //SQUARE_H
