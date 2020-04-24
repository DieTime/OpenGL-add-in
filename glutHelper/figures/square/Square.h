#pragma once
#ifndef SQUARE_H
#define SQUARE_H

#include "../rect/Rect.h"

class Square : public Rect {
public:
    Square(float x, float y, float l, const char* hex, bool fill = false, float width = 1);

    float get_h() override;
    float get_w() override;
    float get_l();

    void set_h(float H) override;
    void set_w(float W) override;
    void set_l(float L);
};


#endif //SQUARE_H
