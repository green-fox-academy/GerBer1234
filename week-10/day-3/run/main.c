#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum country {
    HUN,
    ENG,
    GER
} country_t;

typedef struct racer {
    char name[50];
    country_t country;
    int result;
} racer_t;

void random(racer_t arr[], int length);

char *get_fastest(racer_t *rc, int length);

int get_same_country(racer_t *rc, int length, country_t c);

int main() {
    racer_t r1[4] = {{.name = "Endre", .country=HUN},
                     {.name = "Andreas", .country=GER},
                     {.name = "Garry", .country=ENG},
                     {.name = "Judit", .country=HUN}};

    random(r1, 4);
    printf("Name of the fastest: %s\n", get_fastest(r1, 4));
    printf("From Hungary: %d", get_same_country(r1, 4, HUN));
    return 0;
}

void random(racer_t arr[], int length) {
    srand((unsigned int) time(NULL));
    for (int i = length - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        racer_t temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

char *get_fastest(racer_t *rc, int length) {
    return rc[0].name;
}

int get_same_country(racer_t *rc, int length, country_t c) {
    int counter = 0;
    for (int i = 0; i < length; ++i) {
        if (rc[i].country == c) {
            counter++;
        }
    }
    return counter;
}