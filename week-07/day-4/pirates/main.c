#include <stdio.h>
#include <string.h>

struct Pirate {
    char name[256];
    int has_wooden_leg;
    short int gold_count;
};

int sum(struct Pirate pirate[], int length);

double avg(struct Pirate pirate[], int length);

char *richest(struct Pirate pirate[], int length);

int main() {
    struct Pirate p1;
    struct Pirate p2;
    struct Pirate p3;
    strcpy(p1.name, "Joe");
    p1.gold_count = 150;
    p1.has_wooden_leg = 1;
    strcpy(p2.name, "Jane");
    p2.gold_count = 250;
    p2.has_wooden_leg = 1;
    strcpy(p3.name, "Juri");
    p3.gold_count = 1500;
    p3.has_wooden_leg = 0;
    struct Pirate pirates[] = {p1, p2, p3};
    int length = sizeof(pirates) / sizeof(pirates[0]);
    printf("Sum of the gold: %d\n", sum(pirates, length));
    printf("Average of the gold: %.2lf\n", avg(pirates, length));
    printf("The richest person, who has wooden leg: %s\n", richest(pirates, length));
    return 0;
}

int sum(struct Pirate pirate[], int length) {
    int sum = 0;
    for (int i = 0; i < length; ++i) {
        sum += pirate[i].gold_count;
    }
    return sum;
}

double avg(struct Pirate pirate[], int length) {
    int avg = 0;
    avg = sum(pirate, length) / length;
    return avg;
}

char *richest(struct Pirate pirate[], int length) {
    int max = 0;
    int index = 0;
    for (int i = 0; i < length; ++i) {
        if (pirate[i].has_wooden_leg == 1 && pirate[i].gold_count > max) {
            max = pirate[i].gold_count;
            index = i;
        }
    }
    return pirate[index].name;
}