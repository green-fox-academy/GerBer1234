#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

int prices(smartphone_t arr[], char *filename,int length);

/* Create a smartphone register application
 * Additionally, you need to create a new file(prices.txt) that looks like this:
 * <NAME> <PRICE>
 * <NAME> <PRICE>
 * .
 * .
 * .
 *
 * To calculate the price use the following method. The base price of every phone is 300$.
 * If the size is SMALL, that adds 0$ to the value
 * If the size is MEDIUM, that adds 100$ to the value
 * If the size is BIG, that doubles the base price.
 *
 * The price also depends on the age. For every year that passed since its release,
 * the phone loses 50$ but the maximum value that it can lose because of the age is 250$
 */

int main() {
    smartphone_t arr[100];
    char *type="BIG";
    int size = read_from_file(arr, "phones.txt");
    get_oldest(arr, size);
    printf("There are %d phones with %s (>= 15 cm) screen size\n", get_screen_size_count(arr, size, type), get_type((type_t) type));
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
char *get_type(type_t type){
    switch(type){
        case BIG : return "BIG";
        case MEDIUM : return "MEDIUM";
        case SMALL : return "SMALL";
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

int get_screen_size_count(smartphone_t arr[], int length, const char *tp){
    int counter = 0;
    for (int i = 0; i < length; ++i) {
        if(get_type(arr[i].type)==tp){
            counter++;
        }
    }
    return counter;
}

int prices(smartphone_t arr[],char *filename, int length){
    FILE *fp;
    fp = fopen(filename,"w");
    if (fp == NULL) {
        printf("Can't open the file!\n");
        return -1;
    } else {
        for (int i = 0; i < length; ++i) {
            fputs(arr[i].name);
        }
    }
}