#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct movies {
    char name[100];
    double money;
    int year;
} movies_t;

int count_lines(char *filename);

int *read_from_file(movies_t arr[], char *filename);

int *read_from(movies_t arr[], char *filename);

void distinctelements(movies_t arr[], int length);

double sum(movies_t arr[], int length, char *filename);

int best_year(movies_t arr2[], int length);

int main() {
    int length = count_lines("file.txt");
    movies_t *arr = calloc((size_t) length, sizeof(movies_t));
    movies_t *arr2 = calloc((size_t) length, sizeof(movies_t));
    if (arr == NULL || arr2 == NULL) {
        printf("Error! memory not allocated.");
        return -2;
    }
    read_from_file(arr, "file.txt");
    sum(arr, length, "ym.txt");
    read_from(arr2, "ym.txt");
    distinctelements(arr2, length);
    printf("The most successful year was in ");
    printf("%d.\n", best_year(arr2, length));
    free(arr);
    free(arr2);
    if (remove("ym.txt") == 0) {
        printf("File deleted successfully.");
    } else {
        printf("Error: unable to delete the file.");
    }
    return 0;
}

int count_lines(char *filename) {
    int counter = 0;
    FILE *fp;
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Can't open the file.\n");
        return 0;
    } else {
        char line[100];
        while (!feof(fp)) {
            fgets(line, 100, fp);
            counter++;
        }
    }
    fclose(fp);
    return counter;
}

int *read_from_file(movies_t arr[], char *filename) {
    FILE *fp;
    fp = fopen(filename, "r");
    char line[100];
    int i = 0;
    char *ptr;
    if (fp == NULL) {
        printf("Can't open the file");
        exit(-1);
    } else {
        while (fgets((char *) line, sizeof(line), fp) != NULL) {
            char *data = strtok(line, "$");
            strcpy(arr[i].name, data);
            char *r, *w;
            data = strtok(NULL, " ");
            for (w = r = data; *r; r++) {
                if (*r != ',') {
                    *w++ = *r;
                }
            }
            *w = '\0';
            arr[i].money = strtod(data, &ptr);
            data = strtok(NULL, "\n");
            arr[i].year = strtol(data, NULL, 10);
            i++;
        }
    }
    fclose(fp);
}

int *read_from(movies_t arr[], char *filename) {
    FILE *fp;
    fp = fopen(filename, "r");
    char line[100];
    int i = 0;
    char *ptr;
    if (fp == NULL) {
        printf("Can't open the file");
        exit(-1);
    } else {
        while (fgets((char *) line, sizeof(line), fp) != NULL) {
            char *data = strtok(line, " ");
            arr[i].year = strtol(data, NULL, 10);
            data = strtok(NULL, "\n");
            arr[i].money = strtod(data, &ptr);
            i++;
        }
    }
    fclose(fp);
}

void distinctelements(movies_t arr[], int length) {
    int i, j;
    printf("Year\tProfit\n");
    for (i = 0; i < length; i++) {
        for (j = i + 1; j < length; j++) {
            if (arr[i].year == arr[j].year) {
                break;
            }
        }
        if (j == length) {
            printf("%d %13.0lf\n", arr[i].year, arr[i].money);
        }
    }
}

double sum(movies_t arr[], int length, char *filename) {
    FILE *fp;
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Can't open the file.");
        return -1;
    } else {
        for (int i = 0; i < length; ++i) {
            double summ = 0;
            for (int j = 0; j < length; ++j) {
                if (arr[i].year == arr[j].year) {
                    summ += arr[j].money;
                }
            }
            fprintf(fp, "%d %.0lf\n", arr[i].year, summ);
        }
    }
    fclose(fp);
}

int best_year(movies_t arr[], int length) {
    double max = 0;
    int index = 0;
    for (int i = 0; i < length; ++i) {
        if (arr[i].money > max) {
            max = arr[i].money;
            index = i;
        }
    }
    return arr[index].year;
}