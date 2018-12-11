#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char same(char *string1, char *string2);

int main() {
    char *string1[100];
    char *string2[100];
    printf("Give me two strings, please.\n");
    printf("First string: ");
    gets((char *) string1);
    printf("Second string: ");
    gets((char *) string2);
    if (same((char *) string1, (char *) string2) == 1) {
        printf("Your strings are equal.");
    } else {
        printf("Your strings are not equal.");
    }
    return 0;
}

char same(char *string1, char *string2) {
    for (int i = 0; string1[i]; i++) {
        string1[i] = (char) tolower(string1[i]);
    }
    for (int i = 0; string2[i]; i++) {
        string2[i] = (char) tolower(string2[i]);
    }
    if (0 == strcmp(string1, string2)) {
        return 1;
    } else {
        return 0;
    }
}