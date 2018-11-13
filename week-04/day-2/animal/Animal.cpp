#include "Animal.h"

Animal::Animal(std::string name) {
    _hunger = 50;
    _thirst = 50;
}

int Animal::eat(){
    _hunger--;
}

int Animal::drink(){
    _thirst--;
}
int Animal::play(){
    _hunger++;
    _thirst++;
}

int Animal::getHunger() {
    return _hunger;
}

int Animal::getThirst() {
    return _thirst;
}
