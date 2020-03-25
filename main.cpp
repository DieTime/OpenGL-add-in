#include "glutHelper/helper.h"

float i = 0;

void Display() {
    Pixel pixel(-0.25, 0, "#ffffff");
    Line line(0, i, 1, 1, "#ffffff");
    Triangle triangle(-0.25, -0.25, 0.75, 0.75, 0.25, -0.75, "#ffffff");
    Oval oval(0, 0, i, 0.2, "#ffffff");
    Curve arc(-0.5, 0, 0.4, 0.2, 90, 180, "#ffffff");
    Circle circle(0, 0, 0.4, "#ffffff");
    Rect rect(0, i, 0.2, 0.4, "#ffffff");
    Square square(-0.75, -0.75, 0.1, "#ffffff");

    pixel.draw();
    line.draw();
    triangle.draw();
    oval.draw();
    arc.draw();
    circle.draw();
    rect.draw();
    square.draw();

    i += 0.01;
    if (i > 1) i = -1;
}

int main() {
    CreateGL(500, 500, "GLFigures", "#000000", 30, Display);
    return 0;
}