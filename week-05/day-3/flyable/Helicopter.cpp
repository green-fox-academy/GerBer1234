#include <utility>
#include "Helicopter.h"

void Helicopter::land() {
    std::cout << "It can be land." << std::endl;
}

void Helicopter::fly() {
    std::cout << "It can be fly." << std::endl;
}

void Helicopter::takeOff() {
    std::cout << "It can be take off." << std::endl;
}

int Helicopter::getSize() {
    return _size;
}

std::string Helicopter::getType() {
    return _type;
}

int Helicopter::getWeight() {
    return _weight;
}

Helicopter::Helicopter(int size, int weight, std::string type) {
    _size = size;
    _weight = weight;
    _type = std::move(type);
    std::cout << "You have a " << getType() << " helicopter. The weight of it is " << getWeight() <<
              " kg. The landing area diameter is about " << getSize() << " m." << std::endl;
}
