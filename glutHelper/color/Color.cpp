#include "Color.h"

Color::Color() {
    r = 0;
    g = 0;
    b = 0;
}

Color::Color(const char *hex) {
    int red, green, blue;
    sscanf(hex + 1, "%02x%02x%02x", &red, &green, &blue);
    r = (float)red / 255;
    g = (float)green / 255;
    b = (float)blue / 255;
}
