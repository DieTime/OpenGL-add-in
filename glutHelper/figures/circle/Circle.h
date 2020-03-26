#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H

#include "../oval/Oval.h"

class Circle : public Oval {
public:
    Circle(float x, float y, float r, const char* hex, bool fill = false, float w = 1);
};

#endif //CIRCLE_H
