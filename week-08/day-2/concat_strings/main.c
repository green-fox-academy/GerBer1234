#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *cat(char *string1, char *string2);

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
    char *c1 = cat(string1, string2);
    printf("%s\n", c1);
    printf("Case 2:\n");
    char *c2 = cat(string3, string4);
    printf("%s\n", c2);
    printf("Case 3:\n");
    char *c3 = cat(string5, string6);
    printf("%s\n", c3);
    free(c1);
    free(c2);
    free(c3);
    return 0;
}

char *cat(char *string1, char *string2) {
    char *result = malloc(strlen(string1) + strlen(string2) + 1);
    if (result == NULL) {
        return "Error! memory not allocated.";
    } else {
        strcpy(result, string1);
        strcat(result, string2);
        if (strlen(result) == 0) {
            printf("Empty string.\n");
        } else {
            return result;
        }
    }
}