#include <stdio.h>

typedef struct {
    char *address;
    int price;
    int rooms;
    int size;
} house;

char market(house *hou);

int worth(house hou[], int length);

int main() {
    house h1;
    h1.address = "353. Elm Street";
    h1.size = 100;
    h1.price = 30000;
    h1.rooms = 5;
    house h2;
    h2.address = "310. Elm Street";
    h2.size = 130;
    h2.price = 100000;
    h2.rooms = 5;
    house h3;
    h3.address = "300. Elm Street";
    h3.size = 80;
    h3.price = 1000;
    h3.rooms = 5;
    house hou[] = {h1, h2, h3};
    market(&h1);
    int length = sizeof(hou) / sizeof(hou[0]);
    printf("Worth it: %d", worth(hou, length));
    return 0;
}

char market(house *hou) {
    if ((hou->price / hou->size) < 401) {
        return 1;
    } else {
        return 0;
    }
}

int worth(house hou[], int length) {
    int counter = 0;
    for (int i = 0; i < length; ++i) {
        if (market(&hou[i]) == 1) {
            counter++;
        }
    }
    return counter;
}