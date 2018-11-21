#include <utility>
#include "Reptile.h"

Reptile::Reptile(std::string name) {
    _name= std::move(name);
}

Reptile::Reptile() = default;

std::string Reptile::breed() {
    return "laying eggs.";
}