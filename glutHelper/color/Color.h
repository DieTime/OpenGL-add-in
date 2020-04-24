#pragma once
#ifndef RAYS_COLOR_H
#define RAYS_COLOR_H

#include <cstdio>

class Color {
protected:
    float r = 0; // Red component of color
    float g = 0; // Green component of color
    float b = 0; // Blue component of color
public:
    Color() = default;
    explicit Color(const char* hex);

    float get_r();
    float get_g();
    float get_b();

    void setColor(const char* hex);
    void set_r(float R);
    void set_g(float G);
    void set_b(float B);
};

#endif //RAYS_COLOR_H