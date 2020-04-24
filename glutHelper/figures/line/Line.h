#ifndef LINE_H
#define LINE_H

#include <cmath>

#include "../pixel/Pixel.h"

class Line : public Pixel {
protected:
    float dx2 = 0;
    float dy2 = 0;
public:
    Line() = default;
    Line(float x1, float y1, float x2, float y2, const char *hex, float w = 1);

    void draw() override;

    float getx_two();
    float gety_two();

    void setx_two(float X);
    void sety_two(float Y);
};

#endif //LINE_H
