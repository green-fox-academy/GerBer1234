#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    fp = fopen("my-file.txt", "a");
    if (fp == NULL) {
        printf("Can't open the file.");
        return -1;
    } else {
        fputs("\nBerenyi Gergely", fp);
        printf("Mission accomplished!");
        fclose(fp);
    }
    return 0;
}