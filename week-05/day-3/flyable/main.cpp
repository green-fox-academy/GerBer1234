#include <iostream>
#include "Helicopter.h"
#include "Bird.h"

int main() {
    Helicopter heli(5,8450,"Mi-24");
    heli.fly();
    heli.land();
    heli.takeOff();
    Bird bird("eagle");
    bird.takeOff();
    bird.land();
    bird.fly();
    return 0;
}