#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int read_from_file(char *filename);

int main() {
    // Create a method that find the 5 most common lottery numbers in lottery.csv
    printf("%d",read_from_file("lottery.csv"));
    return 0;
}

int read_from_file(char *filename) {
    int nums[1000];
    int index = 0;
    int i = 0;
    int counter = 0;
    FILE *fp;
    fp = fopen(filename, "r");
    char line[100];
    if (fp == NULL) {
        printf("Can't open the file!\n");
        return -1;
    } else {
        while (fgets((char *) line, sizeof(line), fp) != NULL) {
            char *data = strtok(line, ";");
            counter = 0;
            while (data != NULL) {
                data = strtok(NULL, ";");
                if (data != NULL) {
                    counter++;
                }
            }
            while (fgets((char *) line, sizeof(line), fp) != NULL) {
                char *data1 = strtok(line,";");
                while (data1 != NULL){

                    data1 = strtok(NULL,";");
                }}
        }
    }return counter;
}