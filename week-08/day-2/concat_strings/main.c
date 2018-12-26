#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cat(char *string1, char *string2);

int main() {
    char *string1 = {"First part "};
    char *string2 = {"Second part"};
    char *string3 = {""};
    char *string4 = {""};
    char *string5 = {
            "First: Write a function which takes 2 strings as parameter, concatenates them together and returns it back. "
            "Test it for long and empty strings as well. Try to use the least amount of memory that's possible. "};
    char *string6 = {
            "Second: Write a function which takes 2 strings as parameter, concatenates them together and returns it back. "
            "Test it for long and empty strings as well. Try to use the least amount of memory that's possible. "};
    printf("Case 1:\n");
    cat(string1, string2);
    printf("Case 2:\n");
    cat(string3, string4);
    printf("Case 3:\n");
    cat(string5, string6);
    return 0;
}

int cat(char *string1, char *string2) {
    char *result = malloc(strlen(string1) + strlen(string2) + 1);
    if (result == NULL) {
        printf("Error! memory not allocated.");
        return -1;
    }
    strcpy(result, string1);
    strcat(result, string2);
    if (strlen(result) == 0) {
        printf("Empty string.\n");
    } else {
        printf("%s\n", result);
    }
    free(result);
}