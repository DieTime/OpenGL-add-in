#include "glutHelper/helper.h"

float i = 0;

void Display() {
    Pixel pixel(50, 50, "#48689c", 5);
    Line line(100, 65, 135, 35, "#48689c", 3);
    Triangle triangle(175, 65, 200, 35, 225, 65, "#48689c", false, 3);
    Triangle triangle_filled(265, 70, 295, 30, 325, 70, "#48689c", true);
    Oval oval(380, 50, 25, 20, "#48689c", false ,3);
    Oval oval_filled(460, 50, 27, 23, "#48689c", true);
    Curve arc(50, 150, 20, 20, 0, i, "#48689c", 3);
    Circle circle(115, 150, 20, "#48689c", false, 3);
    Circle circle_filled(185, 150, 23, "#48689c", true);
    Rect rect(260, 150, 35, 50, "#48689c", false, 3);
    Rect rect_filled(340, 150, 40, 55, "#48689c", true);
    Square square(410, 150, 35, "#48689c", false, 3);
    Square square_filled(465, 150, 40, "#48689c", true);

    pixel.draw();
    line.draw();
    triangle.draw();
    triangle_filled.draw();
    oval.draw();
    oval_filled.draw();
    arc.draw();
    circle.draw();
    circle_filled.draw();
    rect.draw();
    rect_filled.draw();
    square.draw();
    square_filled.draw();

    if (i++ > SCENE_WIDTH / 2) i = 0;
}

int main() {
    CreateGL(525, 200, "GLFigures", "#ffffff", 60, Display);
    return 0;
}