#include <stdio.h>
#include <string.h>


int write(char *filename, char *word, int number);

int main() {
    write("my-file.txt", "apple", 5);
    return 0;
}

int write(char *filename, char *word, int number) {
    FILE *fp;
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Can't open the file.");
        return -1;
    } else {
        for (int i = 0; i < number; ++i) {
            fputs(word, fp);
            fputs("\n", fp);
        }
        printf("Mission accomplished.");
    }
    fclose(fp);
}