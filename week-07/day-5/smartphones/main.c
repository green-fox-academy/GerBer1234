#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef enum type {
    BIG = 15,
    MEDIUM = 12,
    SMALL = 11
} type_t;

typedef struct smartphone {
    char name[256];
    int year;
    type_t type;
} smartphone_t;

void get_oldest(smartphone_t arr[], int length);

int read_from_file(smartphone_t arr[], char *filename);

char *get_type(type_t type);

int get_screen_size_count(smartphone_t arr[], int length, const char *tp);

int prices(smartphone_t arr[], char *filename, int length);

int main() {
    smartphone_t arr[100];
    char *type = "BIG";
    int size = read_from_file(arr, "phones.txt");
    get_oldest(arr, size);
    printf("There are %d phones with %s (>= 15 cm) screen size\n", get_screen_size_count(arr, size, type),
           get_type((type_t) type));
    prices(arr, "prices.txt", size);
    return 0;
}

int read_from_file(smartphone_t arr[], char *filename) {
    int counter = 0;
    int i = 0;
    FILE *fp;
    char line[100];
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Can't open the file!\n");
        return -1;
    } else {
        while (fgets((char *) line, sizeof(line), fp) != NULL) {
            char *data = strtok(line, " ");
            while (data != NULL) {
                counter++;
                if (counter == 1) {
                    strcpy(arr[i].name, data);
                } else if (counter == 2) {
                    arr[i].year = strtol(data, NULL, 10);
                } else if (counter == 3) {
                    if (strtol(data, NULL, 10) >= BIG) {
                        arr[i].type = BIG;
                        get_type(arr[i].type);
                    } else if (strtol(data, NULL, 10) >= MEDIUM) {
                        arr[i].type = MEDIUM;
                        get_type(arr[i].type);
                    } else if (strtol(data, NULL, 10) <= SMALL) {
                        arr[i].type = SMALL;
                        get_type(arr[i].type);
                    }
                }
                data = strtok(NULL, " ");
            }
            i++;
            counter = 0;
        }
    }
    fclose(fp);
    return i;
}

char *get_type(type_t type) {
    switch (type) {
        case BIG :
            return "BIG";
        case MEDIUM :
            return "MEDIUM";
        case SMALL :
            return "SMALL";
    }
}

void get_oldest(smartphone_t arr[], int length) {
    int min = arr[0].year;
    int index = 0;
    for (int i = 0; i < length; ++i) {
        if (arr[i].year < min) {
            min = arr[i].year;
            index = i;
        }
    }
    printf("The %s is the oldest device in the database\n", arr[index].name);
}

int get_screen_size_count(smartphone_t arr[], int length, const char *tp) {
    int counter = 0;
    for (int i = 0; i < length; ++i) {
        if (get_type(arr[i].type) == tp) {
            counter++;
        }
    }
    return counter;
}

int year() {
    time_t s;
    struct tm *current_time;
    s = time(NULL);
    current_time = localtime(&s);
    int now = current_time->tm_year + 1900;
    return now;
}

int prices(smartphone_t arr[], char *filename, int length) {
    FILE *fp;
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Can't open the file!\n");
        return -1;
    } else {
        int lose = 50;
        int age = 0;
        for (int i = 0; i < length; ++i) {
            int price = 300;
            age = year() - arr[i].year;
            if (age > 5) {
                age = 5;
            }
            if (arr[i].type < 12) {
                if (arr[i].year == year()) {
                    fprintf(fp, "%s %d\n", arr[i].name, price);
                } else {
                    fprintf(fp, "%s %d\n", arr[i].name, (price - (age * lose)));
                }
            } else if (arr[i].type >= 12 && arr[i].type <= 14) {
                price += 100;
                if (arr[i].year == year()) {
                    fprintf(fp, "%s %d\n", arr[i].name, price);
                } else {
                    fprintf(fp, "%s %d\n", arr[i].name, (price - (age * lose)));
                }
            } else if (arr[i].type >= 15) {
                price *= 2;
                if (arr[i].year == year()) {
                    fprintf(fp, "%s %d\n", arr[i].name, price);
                } else {
                    fprintf(fp, "%s %d\n", arr[i].name, (price - (age * lose)));
                }
            }
        }
    }
    fclose(fp);
}