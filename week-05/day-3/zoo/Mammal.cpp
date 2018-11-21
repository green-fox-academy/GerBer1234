#include <utility>

#include <utility>

#include "Mammal.h"

Mammal::Mammal(std::string name) {
    _name= std::move(name);
}

Mammal::Mammal() = default;

std::string Mammal::breed() {
    return "pushing miniature versions out.";
}