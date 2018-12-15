#include <stdio.h>
#include <string.h>

int count_lines(char *filename);

int main() {
    printf("There are %d lines in the given file.", count_lines("my-file.txt"));
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
        fclose(fp);
        return counter;
    }
}