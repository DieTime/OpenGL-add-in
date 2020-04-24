#include "glutHelper/helper.h"

int width = 500;
int height = 500;

float vx = 10;
float vy = 10;

Circle c(250.0, 250.0, 50, "#00ff2f", false, 2);
Pixel p(250.0, 250.0, "#b700ff", 10);

Pixel* ptr = &p;

void Display() {
    if (GetAsyncKeyState(VK_SPACE)) {
        if (ptr == &c) ptr = &p;
        else if (ptr == &p) ptr = &c;
        Sleep(300);
    }

    if (GetAsyncKeyState(VK_UP))    ptr->move(0, -vy);
    if (GetAsyncKeyState(VK_DOWN))  ptr->move(0, vy);
    if (GetAsyncKeyState(VK_RIGHT)) ptr->move(vx, 0);
    if (GetAsyncKeyState(VK_LEFT))  ptr->move(-vx, 0);

    ptr->draw();
}

int main() {
    CreateGL(width, height, "GLFigures", "#00000", 60, Display);
    return 0;
}