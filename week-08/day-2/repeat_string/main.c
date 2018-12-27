#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *repeater(const char *str, int num);

int main() {
    char str[100];
    int num = 0;
    printf("Your text is: ");
    gets(str);
    printf("How many times would you like to see it?");
    scanf("%d", &num);
    char *text = repeater(str, num);
    printf("%s", text);
    free(text);
    return 0;
}

char *repeater(const char *str, int num) {
    char *result = calloc(num * strlen(str), sizeof(char));
    if (result == NULL) {
        printf("Error! memory not allocated.");
        exit(-1);
    }
    for (int i = 0; i < num; ++i) {
        strcat(result, str);
    }
    return result;
}