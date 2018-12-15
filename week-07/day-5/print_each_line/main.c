#include <stdio.h>
#include <string.h>

int main() {
    char line[100];
    FILE *fp;
    fp = fopen("my-file.txt", "r");
    if (fp == NULL) {
        printf("Can't open the file!\n");
        return -1;
    } else {
        while (!feof(fp)) {
            fgets(line, 100, fp);
            puts(line);
        }
    }
    fclose(fp);
    return 0;
}