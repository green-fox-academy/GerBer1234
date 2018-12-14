#include <stdio.h>
#include <string.h>

typedef enum digivolution {
    BABY,
    IN_TRAINING,
    ROOKIE,
    CHAMPION,
    ULTIMATE,
    MEGA,
} digivolution_t;

typedef struct digimon {
    char name[128];
    int age;
    int health;
    char tamer[256];
    digivolution_t digivo;
} digimon_t;

char *get_type(digivolution_t digivo);

int get_min_helath(digimon_t digimon[], int length);

int same_level(digimon_t digimon[], int length, digivolution_t digivo);

int same_tamer(digimon_t digimon[], int length, const char tamers[]);

double avg_health(digimon_t digimon[], int length, const char tamers[]);

int main() {
    digimon_t digimons[3] = {{.name="Digi-bug", .age=10, .health=88, .tamer={"Crazy-guy"}, .digivo=BABY},
                             {.name="Digi-trash", .age=6, .health=73, .tamer="Crazy-guy", .digivo=MEGA},
                             {.name="Digi-animal", .age=4, 93, .tamer="Unlucky", .digivo=BABY}};
    int length = sizeof(digimons) / sizeof(digimons[0]);
    printf("Index of the minimum health digimon is: %d\n", get_min_helath(digimons, length));
    digivolution_t type = BABY;
    printf("The number of the digimon(s) at %s level: %d\n", get_type(type), same_level(digimons, length, type));
    char tamers[] = "Crazy-guy";
    printf("Number of the digimons with the same %s tamer: %d\n", tamers, same_tamer(digimons, length, tamers));
    printf("Average health of the digimons with the same %s tamer: %.2lf", tamers,
           avg_health(digimons, length, tamers));
    return 0;
}

char *get_type(digivolution_t digivo) {
    switch (digivo) {
        case BABY :
            return "BABY";
        case IN_TRAINING :
            return "IN-TRAINING";
        case ROOKIE :
            return "ROOKIE";
        case CHAMPION :
            return "CHAMPION";
        case ULTIMATE :
            return "ULTIMATE";
        case MEGA :
            return "MEGA";
    }
}

int get_min_helath(digimon_t digimon[], int length) {
    if (digimon != NULL) {
        int min = digimon[0].health;
        int index = 0;
        for (int i = 0; i < length; ++i) {
            if (digimon[i].health < min) {
                min = digimon[i].health;
                index = i;
            }
        }
        return index;
    } else {
        printf("Something wrong. I hate digimons.\n");
        return -1;
    }
}

int same_level(digimon_t digimon[], int length, digivolution_t digivo) {
    if (digimon != NULL) {
        int counter = 0;
        for (int i = 0; i < length; ++i) {
            if (digimon[i].digivo == digivo) {
                counter++;
            }
        }
        return counter;
    } else {
        printf("Something wrong. I hate digimons.\n");
        return -1;
    }
}

int same_tamer(digimon_t digimon[], int length, const char tamers[]) {
    if (digimon != NULL && strlen(tamers) < 256) {
        int counter = 0;
        for (int i = 0; i < length; ++i) {
            if (!strcmp(digimon[i].tamer, tamers)) {
                counter++;
            }
        }
        return counter;
    } else {
        printf("Something wrong. I hate digimons.\n");
        return -1;
    }
}

double avg_health(digimon_t digimon[], int length, const char tamers[]) {
    if (digimon != NULL && strlen(tamers) < 256) {
        double sum = 0;
        int counter = 0;
        for (int i = 0; i < length; ++i) {
            if (!strcmp(digimon[i].tamer, tamers)) {
                sum += digimon[i].health;
                counter++;
            }
        }
        return sum / counter;
    } else {
        printf("Something wrong. I hate digimons.\n");
        return -1;
    }
}