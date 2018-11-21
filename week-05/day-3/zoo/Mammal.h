#ifndef ZOO_MAMMAL_H
#define ZOO_MAMMAL_H
#include "Animal.h"

class Mammal : public Animal{
public:
    Mammal();
    explicit Mammal(std::string);
    std::string breed() override;
};


#endif //ZOO_MAMMAL_H
