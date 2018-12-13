#include <string.h>
#include <stdio.h>

enum Transmission {
    MANUAL,
    AUTOMATIC,
    CVT,
    SEMI_AUTOMATIC,
    DUAL_CLUTH
};

typedef struct {
    char manuacturer[256];
    float price;
    int year;
    enum Transmission trans;
} car;

int get_older_cars_than(car *array, int array_length, int age);

int get_transmission_count(car *array, int array_length, enum Transmission trnsm);

char *get_transmission(enum Transmission trnsm);

int main() {
    car c1;
    car c2;
    car c3;
    c1.year = 2008;
    c1.price = 12000;
    strcpy(c1.manuacturer, "Toyota");
    c1.trans = AUTOMATIC;
    car cars[] = {c1};
    int length = sizeof(cars) / sizeof(cars[0]);
    int age = 2010;
    enum Transmission trnsm = CVT;
    printf("Older car(s) than %d: %d\n", age, get_older_cars_than(cars, length, age));
    printf("Car(s) with %s transmission: %d\n", get_transmission(trnsm), get_transmission_count(cars, length, trnsm));
    return 0;
}

int get_older_cars_than(car *array, int array_length, int age) {
    int count = 0;
    for (int i = 0; i < array_length; ++i) {
        if (array[i].year < age) {
            count++;
        }
    }
    return count;
}

int get_transmission_count(car *array, int array_length, enum Transmission trnsm) {
    int counter = 0;
    for (int i = 0; i < array_length; ++i) {
        if (array[i].trans == trnsm) {
            counter++;
        }
    }
    return counter;
}

char *get_transmission(enum Transmission trnsm) {
    switch (trnsm) {
        case AUTOMATIC :
            return "AUTOMATIC";
        case MANUAL :
            return "MANUAL";
        case CVT :
            return "CVT";
        case SEMI_AUTOMATIC :
            return "SEMI-AUTOMATIC";
        case DUAL_CLUTH :
            return "DUAL-CLUTH";
    }
}