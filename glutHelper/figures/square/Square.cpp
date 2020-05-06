#include "Square.h"

// ------------------- РЕАЛИЗАЦИЯ КЛАССА ------------------ //

Square::Square(float x, float y, float l, const char *hex, bool fill,
               float width) : Rect(x, y, l, l, hex, fill, width){}

float Square::get_h() { return h; }
float Square::get_w() { return h; }
float Square::get_side_len() { return h; }

void Square::set_h(float H) {
    h = H;
    w = H;
}
void Square::set_w(float W) {
    h = W;
    w = W;
}
void Square::set_side_len(float L) { {
    h = L;
    w = L;
}}
