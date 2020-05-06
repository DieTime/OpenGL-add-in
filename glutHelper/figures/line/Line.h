#ifndef LINE_H
#define LINE_H

#include <cmath>

#include "../pixel/Pixel.h"

class Line : public Pixel {
protected:
    float dx2 = 0; // X axis dist of the second point relative to the first
    float dy2 = 0; // Y axis dist of the second point relative to the first
public:
    Line() = default;
    Line(float x1, float y1, float x2, float y2, const char *hex, float w = 1);

    void draw() override;

    float get_x2();
    float get_y2();

    void set_x2(float X);
    void set_y2(float Y);
};

#endif //LINE_H
