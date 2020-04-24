#include "Color.h"
#include <iostream>

Color::Color(const char *hex) { this->setColor(hex); }

float Color::get_r() { return r; }
float Color::get_g() { return g; }
float Color::get_b() { return b; }

void Color::setColor(const char *hex) {
    int red, green, blue;

    // Reading from the line of components
    if (sscanf(hex + 1, "%02x%02x%02x", &red, &green, &blue) == 3) {
        // component normalization
        r = (float)red / 255;
        g = (float)green / 255;
        b = (float)blue / 255;
    }
    else {
        throw std::runtime_error("Incorrect color entered!");
    }
}
void Color::set_r(float R) { r = R; }
void Color::set_g(float G) { g = G; }
void Color::set_b(float B) { b = B; }