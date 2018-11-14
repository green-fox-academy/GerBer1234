#include <iostream>
#include "Sharpie.h"

Sharpie::Sharpie(std::string color, float width) {
    _color = color;
    _width = width;
    _inkAmount = 100;
}

float Sharpie::use() {
    _inkAmount--;
}

std::string Sharpie::getColor() {
    return _color;
}

float Sharpie::getWidth() {
    return _width;
}

float Sharpie::getinkAmount() {
    return _inkAmount;
}