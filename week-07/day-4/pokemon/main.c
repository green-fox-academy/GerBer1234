#include <stdio.h>

typedef enum type {
    NORMAL,
    FIRE,
    WATER,
    ELECTRIC,
    GRASS,
    ICE,
    FIGHTING,
    POISION,
    GROUND,
    FLYING,
    PSYCHIC,
    BUG,
    ROCK,
    GHOST,
    DRAGON,
    DARK,
    STEEL,
    FAIRY
} type_t;

typedef struct pokemon {
    char name[256];
    int age;
    float strength;
    float speed;
    type_t type;
} pokemon_t;

int get_faster(pokemon_t *pokemon, int length, float actual_speed);

int get_type(pokemon_t *pokemon, int length, type_t type);

char *get_strongest(pokemon_t *pokemon, int length, float strength);

float max_strength(pokemon_t *pokemon, int length, type_t type);

char *get_types(type_t type);

int main() {
    pokemon_t pokemon[3] = {{.name="Chicken_head", .age=10, .strength=6.5, .speed=4.5, PSYCHIC},
                            {.name="Wolf_tail", .age=7, .strength=4.5, .speed=7.5,     FIGHTING},
                            {.name="Brain_storm", .age=17, .strength=5.5, .speed=6.5,  PSYCHIC}};
    //pokemon_t *pokemon1 = NULL;
    int length = sizeof(pokemon) / sizeof(pokemon[0]);
    float actual_speed = 5;
    printf("Pokemon(s) faster than %.1lf: %d\n", actual_speed, get_faster(pokemon, length, actual_speed));
    //printf("%d\n", get_faster(pokemon1, length, 5));
    type_t type = FIGHTING;
    printf("Number of pokemon(s) with %s type: %d\n", get_types(type), get_type(pokemon, length, type));
    float strength = 5;
    printf("Type of the strongest pokemon: %s\n", get_strongest(pokemon, length, strength));
    //printf("%s\n", get_strongest(pokemon1, length, 5));
    type_t type1 = PSYCHIC;
    printf("Highest strength of the %s pokemons: %.1f\n", get_types(type1), max_strength(pokemon, length, type1));
    return 0;
}

char *get_types(type_t type) {
    switch (type) {
        case NORMAL :
            return "NORMAL";
        case FIRE :
            return "FIRE";
        case WATER :
            return "WATER";
        case ELECTRIC :
            return "ELECTRIC";
        case GRASS :
            return "GRASS";
        case ICE :
            return "ICE";
        case FIGHTING :
            return "FIGHTING";
        case POISION :
            return "POISION";
        case GROUND :
            return "GROUND";
        case FLYING :
            return "FLYING";
        case PSYCHIC :
            return "PSYCHIC";
        case BUG :
            return "BUG";
        case ROCK :
            return "ROCK";
        case GHOST :
            return "GHOST";
        case DRAGON :
            return "DRAGON";
        case DARK :
            return "DARK";
        case STEEL :
            return "STEEL";
        case FAIRY :
            return "FAIRY";
    }
}

int get_faster(pokemon_t *pokemon, int length, float actual_speed) {
    if (pokemon != NULL) {
        int counter = 0;
        for (int i = 0; i < length; ++i) {
            if (pokemon[i].speed > actual_speed) {
                counter++;
            }
        }
        return counter;
    } else {
        printf("Something wrong.\n");
        return -1;
    }
}

int get_type(pokemon_t *pokemon, int length, type_t type) {
    if (pokemon != NULL) {
        int counter = 0;
        for (int i = 0; i < length; ++i) {
            if (pokemon[i].type == type) {
                counter++;
            }
        }
        return counter;
    } else {
        printf("Something wrong.\n");
        return -1;
    }
}

char *get_strongest(pokemon_t *pokemon, int length, float strength) {
    if (pokemon != NULL) {
        float max = 0;
        int index = 0;
        for (int i = 0; i < length; ++i) {
            if (pokemon[i].strength > max) {
                max = pokemon[i].strength;
                index = i;
            }
        }
        return get_types(pokemon[index].type);
    } else {
        printf("Something wrong.\n");
        return "-1";
    }
}

float max_strength(pokemon_t *pokemon, int length, type_t type) {
    if (pokemon != NULL) {
        float max = 0;
        for (int i = 0; i < length; ++i) {
            if (pokemon[i].type == type && pokemon[i].strength > max) {
                max = pokemon[i].strength;
            }
        }
        return max;
    } else {
        printf("Something wrong.\n");
        return -1;
    }
}