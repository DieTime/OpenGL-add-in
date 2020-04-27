# OpenGL Add-in
<p align="center">
  <img src="https://i.ibb.co/Vq5WJK8/GLaddin.png" width="320">
</p>
<p align="center">
  <img src="https://img.shields.io/badge/version-1.2.0-blue.svg?style=flat-square" alt="version">
</p>

### About
An add-in for OpenGL for a more convenient programming process. The base classes are implemented: 
- Point
- Line
- Circle
- Oval
- Rectangle
- Square
- Triangle
- Curve

There is a possibility of limiting FPS.

### Example
```cpp
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
```

### Installation for MinGW
1. Download freeGlut library from: https://www.transmissionzero.co.uk/files/software/development/GLUT
2. Copy folders from the archive to the directory with MinGW.
3. Open project.
4. Start coding.

### Changes in version 1.2.0
- Redesigned inheritance system
- Simplify CMakeLists.txt
- Fixed several warnings
