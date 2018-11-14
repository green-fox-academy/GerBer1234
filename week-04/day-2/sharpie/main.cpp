#include <iostream>
#include "Sharpie.h"

int main() {
    Sharpie sh("Brown", 13.5);
    std::cout << "The color is "<< sh.getColor() << ". The width is " << sh.getWidth() << "." << std::endl;
    sh.use();
    std::cout << "The ink amount is " << sh.getinkAmount() << "." << std::endl;
    return 0;
}