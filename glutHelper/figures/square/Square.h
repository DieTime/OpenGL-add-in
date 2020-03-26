#pragma once
#ifndef SQUARE_H
#define SQUARE_H

#include "../rect/Rect.h"

class Square : public Rect {
public:
    Square(float x, float y, float l, const char* hex, bool fill = false, float width = 1);
};


#endif //SQUARE_H
