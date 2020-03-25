# OpenGL Add-in
<p align="center">
  <img src="https://psv4.userapi.com/c856228/u215115449/docs/d15/b6eb94f3dda4/GLaddin.png?extra=W6Bn4na5Lee0XF1-cL2tipAs1LjGy3XzKjXYpMzu1HsDfNtR__M4iZQPjQwkQto1OwCSgVRJICs59zizPqkx2uToj7uZuBDMRr9QYgi1vjG41trfF3nsOmtOXmLm5JUgdFakih5yUoMSrBntQw-Y8Wdo" width="320">
</p>
<p align="center">
  <img src="https://img.shields.io/badge/version-1.0.0-blue.svg" alt="version">
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

#Example
```cpp
#include "glutHelper/helper.h"

float width = 0;

void Display() {
    Rect rect(0, 0, 0.5, width, "#ffffff");
    rect.draw();

    width += 0.01;
    if (width > 1) width = -1;
}

int main() {
    CreateGL(500, 500, "GLFigures", "#000000", 30, Display);
    return 0;
}
```

#Installation for MinGW
1. Download freeglut library from: https://www.transmissionzero.co.uk/files/software/development/GLUT/freeglut-MinGW.zip
2. Copy folders from the archive to the directory with MinGW.
3. Open project.
4. Start coding.
