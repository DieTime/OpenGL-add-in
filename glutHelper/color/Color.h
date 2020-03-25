#pragma once
#ifndef RAYS_COLOR_H
#define RAYS_COLOR_H

#include <cstdio>

class Color {
public:
    float r;
    float g;
    float b;
    Color();
    explicit Color(const char* hex);
};



#endif //RAYS_COLOR_H
