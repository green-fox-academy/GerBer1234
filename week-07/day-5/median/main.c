#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct heights {
    char name[100];
    int size;
    int height[100];
} heights_t;

int read_from_file(heights_t *arr, char *filename);

void sort(heights_t *arr);

char *median(heights_t *arr);

int main() {
    heights_t arr[10];
    read_from_file(arr, "file.txt");
    sort(arr);
    printf("%s", median(arr));
    return 0;
}

int read_from_file(struct heights *arr, char *filename) {
    int counter = 0;
    int i = 0;
    int j = 0;
    FILE *fp;
    char line[100];
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Can't open the file!\n");
        return -1;
    } else {
        while (fgets((char *) line, sizeof(line), fp) != NULL) {
            char *data = strtok(line, ":");
            strcpy(arr[i].name, data);
            while (data != NULL) {
                data = strtok(NULL, ",");
                if (strtol(data, NULL, 10) != 0) {
                    arr[i].height[j] = strtol(data, NULL, 10);
                }
                j++;
                counter++;
            }
            arr[i].size = counter - 1;
            i++;
            j = 0;
            counter = 0;
        }
    }
    fclose(fp);
}

void sort(heights_t *arr) {
    int i = 0, j = 0, temp = 0;
    for (i = 0; i < arr[i].size; i++) {
        for (j = 0; j < arr[i].size; j++) {
            for (int k = 0; k < arr[i].size - 1; ++k) {
                if (arr[i].height[k] > arr[i].height[j]) {
                    temp = arr[i].height[j];
                    arr[i].height[j] = arr[i].height[k];
                    arr[i].height[k] = temp;
                }
            }
        }
    }
}

char *median(heights_t *arr) {
    int even = 0, odd = 0, min = 0, index = 0;
    min = even;
    for (int i = 0; i < 4; ++i) {
        if (arr[i].size % 2 == 0) {
            even = arr[i].height[arr[i].size / 2 - 1], arr[i].height[arr[i].size / 2];
            index = i;
        } else {
            odd = arr[i].height[arr[i].size / 2];
            index = i;
        }
        if (odd < min) {
            min = odd;
        } else {
            min = even;
        }
    }
    return arr[index].name;
}