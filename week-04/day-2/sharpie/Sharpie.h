#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H

#include <iostream>

class Sharpie {
public:
    Sharpie(std::string color, float width);

    std::string getColor();

    float getWidth();

    float getinkAmount();

    float use();

private:
    std::string _color;
    float _width, _inkAmount;
};


#endif //SHARPIE_SHARPIE_H
