#ifndef ZOO_REPTILE_H
#define ZOO_REPTILE_H
#include "Animal.h"

class Reptile : public Animal{
public:
    Reptile();
    explicit Reptile(std::string);
    std::string breed() override;
};


#endif //ZOO_REPTILE_H
