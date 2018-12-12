#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    float price;
    float weight;
} Sandwich;

float price(Sandwich sando, int number);

int main() {
    int number = 5;
    Sandwich sando;
    sando.price = 250.5;
    strcpy(sando.name,"ham and cheese");
    sando.weight = 125.5;
    printf("You ordered %d %s sandwiches for %.2lf,-", number,sando.name,price(sando, number));
    return 0;
}

float price(Sandwich sando, int number) {
    float price = 0;
    price = sando.price * number;
    return price;
}