#include <stdio.h>

enum car_type {
    VOLVO,
    TOYOTA,
    LAND_ROVER,
    TESLA
};

struct car {
    enum car_type type;
    double km;
    double gas;
};

void car_stats(struct car Car);

char *get_car_type(enum car_type cart);

int main() {
    struct car car1;
    car1.type = TESLA;
    car1.km = 50;
    car1.gas = 20;
    struct car car2;
    car2.type = TOYOTA;
    car2.km = 70;
    car2.gas = 30;
    car_stats(car1);
    car_stats(car2);
    return 0;
}

char *get_car_type(enum car_type cart) {
    switch (cart) {
        case VOLVO:
            return "Volvo";
        case TOYOTA:
            return "Toyota";
        case LAND_ROVER:
            return "Land Rover";
        case TESLA:
            return "Tesla";
    }
};

void car_stats(struct car Car) {
    if (Car.type == TESLA) {
        printf("The car has %d km and the type is %s.\n", (int) Car.km, get_car_type(Car.type));
    } else {
        printf("The car has %d gas, %d km and the type is %s.", (int) Car.gas, (int) Car.km, get_car_type(Car.type));
    }
}