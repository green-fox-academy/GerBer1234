#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct log {
    char time[20];
    int in;
    int out;
} log_t;

int num_of_lines(char *filename);

char *read_file(log_t arr[], char *filename);

int sum(log_t arr[], int length);

char *traffic(log_t arr[], int length);

char *cashier(log_t arr[], int length);

int worth(log_t arr[], int length);

int main() {
    int N = num_of_lines("file.txt");
    log_t *arr = calloc((size_t) N, sizeof(log_t));
    read_file(arr, "file.txt");
    printf("The shop had %d customers that day.\n", sum(arr, N));
    printf("The time of the most traffic was %s.\n", traffic(arr, N));
    printf("The most cashiers works between %s.\n", cashier(arr, N));
    printf("Does it worth to keep the shop open in the last 2 hours? ");
    printf("%c\n", worth(arr, N));
    free(arr);
    return 0;
}

int num_of_lines(char *filename) {
    char line[100];
    char *ptr;
    int N;
    FILE *fp;
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Can't open the file.\n");
        exit(-1);
    } else {
        fgets(line, 100, fp);
        N = strtol(line, &ptr, 0);
    }
    fclose(fp);
    return N;
}

char *read_file(log_t arr[], char *filename) {
    char temp[100];
    char *ptr;
    int N;
    char line[1000];
    int i = 0;
    int counter = 0;
    int count0 = 0;
    int count1 = 0;
    FILE *fp;
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Can't open the file.\n");
        exit(-1);
    } else {
        fgets(temp, 100, fp);
        while (fgets((char *) line, sizeof(line), fp) != NULL) {
            char *data = strtok(line, " ");
            while (data != NULL) {
                counter++;
                if (counter == 1) {
                    strcpy(arr[i].time, data);
                } else if (counter > 1) {
                    if (strtol(data, &ptr, 0) == 1) {
                        count1++;
                    } else if (strtol(data, &ptr, 0) != 1) {
                        count0++;
                    }
                }
                data = strtok(NULL, " ");
            }
            arr[i].in = count1;
            arr[i].out = count0;
            count1 = 0;
            count0 = 0;
            i++;
            counter = 0;
        }
    }
    fclose(fp);
}

int sum(log_t arr[], int length) {
    int sum = 0;
    for (int i = 0; i < length; ++i) {
        sum += arr[i].in;
    }
    return sum;
}

char *traffic(log_t arr[], int length) {
    int max = arr[0].in + arr[0].out;
    int index = 0;
    for (int i = 0; i < length; ++i) {
        if ((arr[i].in + arr[i].out) > max) {
            max = arr[i].in + arr[i].out;
            index = i;
        }
    }
    return arr[index].time;
}

char *cashier(log_t arr[], int length) {
    int max = arr[0].in;
    int index = 0;
    for (int i = 0; i < length; ++i) {
        if (arr[i].in > max) {
            max = arr[i].in;
            index = i;
        }
    }
    return arr[index].time;
}

int worth(log_t arr[], int length) {
    if ((sum(arr, length) * 0.05) > (float) (arr[length - 1].in + arr[length - 2].in) / sum(arr, length) * 100) {
        printf("Worth");
    } else {
        printf("Not worth");
    }
}