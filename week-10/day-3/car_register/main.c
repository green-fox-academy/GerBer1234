#include <string.h>
#include <stdio.h>

typedef enum transmission {
    MANUAL,
    AUTOMATIC,
    CVT,
    SEMI_AUTOMATIC,
    DUAL_CLUTCH,
} transmission_t;

typedef struct {
    char name[256];
    float price;
    int year;
    transmission_t trans;
} car;

char *get_transmission(transmission_t trans);

int get_older_cars_than(car* array, int array_length, int age);

int get_transmission_count(car* array, int array_length, transmission_t trnsm);

int main() {
    car c1;
    c1.year=2000;
    strcpy(c1.name,"Toyota");
    c1.trans = CVT;
    car cars[] = {c1};
    int length = sizeof(cars)/sizeof(cars[0]);
    printf("%d\n",get_older_cars_than(cars,length,2001));
    printf("%d",get_transmission_count(cars,length,CVT));
    return 0;
}

char *get_transmission(transmission_t trans) {
    switch (trans) {
        case MANUAL :
            return "MANUAL";
        case AUTOMATIC :
            return "AUTOMATIC";
        case CVT :
            return "CVT";
        case SEMI_AUTOMATIC :
            return "SEMI-AUTOMATIC";
        case DUAL_CLUTCH :
            return "DUAL-CLUTCH";
    }
}

int get_older_cars_than(car* array, int array_length, int age){
    int counter = 0;
    for (int i = 0; i < array_length; ++i) {
        if (age > array[i].year){
            counter++;
        }
    }
    return counter;
}

int get_transmission_count(car* array, int array_length, transmission_t trnsm){
    int counter = 0;
    for (int i = 0; i < array_length; ++i) {
        if (trnsm == array[i].trans){
            counter++;
        }
    }
    return counter;
}