#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef enum {
    BETWEEN_15_AND_20,
    BETWEEN_20_AND_25,
    BETWEEN_25_AND_30,
    BETWEEN_30_AND_35,
    BETWEEN_35_AND_40
} age_groups;

typedef struct persons {
    char name[25];
    int year;
    int month;
    int day;
    int age;
} persons_t;

int nmbr_of_person(char *filename);

persons_t *get_persons(char *filename, int *num);

void ages(persons_t *p, int num);

void get_person(age_groups age, persons_t *p, int num);

void list_persons_in_age_group(persons_t *p, int num, age_groups age);

int main() {
    int nmbr_of_persons = 0;
    nmbr_of_persons = nmbr_of_person("persons.txt");
    persons_t *persons = get_persons("persons.txt", &nmbr_of_persons);
    ages(persons, nmbr_of_persons);
    list_persons_in_age_group(persons, nmbr_of_persons, BETWEEN_25_AND_30);
    free(persons);
    return 0;
}

int nmbr_of_person(char *filename) {
    int counter = 0;
    FILE *fp;
    fp = fopen(filename, "r");
    char line[50];
    if (fp == NULL) {
        printf("Can't open the file");
        exit(-1);
    } else {
        while (fgets((char *) line, sizeof(line), fp) != NULL) {
            counter++;
        }
    }
    fclose(fp);
    return counter;
}

persons_t *get_persons(char *filename, int *num) {
    persons_t *info = calloc((size_t) num, sizeof(persons_t));
    int counter = 0;
    FILE *fp;
    fp = fopen(filename, "r");
    char line[50];
    int i = 0;
    if (fp == NULL) {
        printf("Can't open the file");
        exit(-1);
    } else {
        while (fgets((char *) line, sizeof(line), fp) != NULL) {
            char *data = strtok(line, ",");
            while (data != NULL) {
                counter++;
                if (counter == 1) {
                    strcpy(info[i].name, data);
                } else if (counter == 2) {
                    info[i].year = strtol(data, NULL, 10);
                } else if (counter == 3) {
                    info[i].month = strtol(data, NULL, 10);
                } else if (counter == 4) {
                    info[i].day = strtol(data, NULL, 10);
                }
                data = strtok(NULL, "-");
            }
            i++;
            counter = 0;
        }
    }
    fclose(fp);
    return info;
}

void ages(persons_t *p, int num) {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    double actual = 0;
    actual = ((tm.tm_year + 1900) * 365.25 + tm.tm_yday);
    double current = 0;
    int month = 30;
    for (int i = 0; i < num; ++i) {
        if ((tm.tm_mon + 1) < p[i].month && tm.tm_mday < p[i].day) {
            current = p[i].year * 365.25 + p[i].month * month + p[i].day;
        } else if ((tm.tm_mon + 1) > p[i].month && tm.tm_mday > p[i].day) {
            current = p[i].year * 365.25 + p[i].month * month + p[i].day + 365.25;
        } else {
            current = p[i].year * 365.25 + p[i].month * month + p[i].day;
        }
        p[i].age = (int) ((actual - current) / 365.25);
    }
}

void get_person(age_groups age, persons_t *p, int num) {
    for (int i = 0; i < num; ++i) {
        if (age == 0) {
            if (p[i].age > 14 && p[i].age < 20) {
                printf("%s %d\n", p[i].name, p[i].age);
            }
        } else if (age == 1) {
            if (p[i].age > 19 && p[i].age < 26) {
                printf("%s %d\n", p[i].name, p[i].age);
            }
        } else if (age == 2) {
            if (p[i].age > 25 && p[i].age < 30) {
                printf("%s %d\n", p[i].name, p[i].age);
            }
        } else if (age == 3) {
            if (p[i].age > 29 && p[i].age < 36) {
                printf("%s %d\n", p[i].name, p[i].age);
            }
        }
    }
}

void list_persons_in_age_group(persons_t *p, int num, age_groups age) {
    get_person(age, p, num);
}