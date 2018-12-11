#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *append(char str[]);

int main() {
    char str[100];
    printf("Give me a string, please: ");
    gets(str);
    puts(append(str));
    return 0;
}

char *append(char str[]) {
    strcat(str, "a");
    return str;
}