#include "Bird.h"
Bird::Bird(std::string name) {
    _name= std::move(name);
}

Bird::Bird() = default;

std::string Bird::breed() {
    return "laying eggs.";
}