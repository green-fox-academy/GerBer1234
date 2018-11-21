#ifndef FLYABLE_HELICOPTER_H
#define FLYABLE_HELICOPTER_H
#include "Flyable.h"
#include "Vehicle.h"

class Helicopter : public Flyable, public Vehicle {
public:
    Helicopter(int size, int weight, std::string type);
    void land() override;
    void fly() override;
    void takeOff() override;
    int getSize();
    int getWeight();
    std::string getType();
};


#endif //FLYABLE_HELICOPTER_H
