#ifndef LINE_H
#define LINE_H

#include "../Pixel/Pixel.h"

class Line : public Pixel {
protected:
    float x2;
    float y2;
public:
    Line(float x1, float y1, float x2, float y2, const char *hex, float w = 1);
    void draw() override;
};

#endif //LINE_H
