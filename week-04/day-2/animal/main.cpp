#include <iostream>
#include "Animal.h"

int main() {
    Animal Fox("fox");
    Fox.eat();
    std::cout << Fox.getHunger() << std::endl;
    Fox.drink();
    std::cout << Fox.getThirst() << std::endl;
    Fox.play();
    std::cout << Fox.getHunger() << " " << Fox.getThirst() << std::endl;
    return 0;
}