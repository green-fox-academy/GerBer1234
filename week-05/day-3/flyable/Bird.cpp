#include <utility>
#include "Bird.h"
#include <iostream>

void Bird::land() {
    std::cout << "It can be land really nice." << std::endl;
}

std::string Bird::getName() {
    return _name;
}

std::string Bird::breed() {
    return "laying eggs";
}

Bird::Bird(std::string name) {
    _name = std::move(name);
    std::cout << "We have an " << getName() << "." << std::endl;
}

void Bird::fly() {
    std::cout << "It can be fly very good." << std::endl;
}

void Bird::takeOff() {
    std::cout << "It can be take off from anywhere." << std::endl;
}
