# OpenGL Add-in
<p align="center">
  <img src="https://i.ibb.co/Vq5WJK8/GLaddin.png" width="320">
</p>
<p align="center">
  <img src="https://img.shields.io/badge/version-1.1.0-blue.svg" alt="version">
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

# Example
```cpp
#include "glutHelper/helper.h"

float width = 0;

void Display() {
    Rect rect(250, 250, 50, width, "#ffffff");
    rect.draw();

    if (width++ > SCENE_WIDTH) width = 0;
}

int main() {
    CreateGL(500, 500, "GLFigures", "#000000", 30, Display);
    return 0;
}
```

# Installation for MinGW
1. Download freeglut library from: https://www.transmissionzero.co.uk/files/software/development/GLUT/freeglut-MinGW.zip
2. Copy folders from the archive to the directory with MinGW.
3. Open project.
4. Start coding.

# Changes in version 1.1.0
- Reference system
- Fixed drawing shapes without fill
- Added screen width and height constants