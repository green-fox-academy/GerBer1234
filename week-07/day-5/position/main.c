#include <stdio.h>
#include <string.h>
#include <ctype.h>

void char_index(char string[]);

int main() {
    char string[55] = "This is a string for testing";
    char *p;
    char_index(string);
    return 0;
}

void char_index(char string[]) {
    int length = strlen(string);
    for (int i = 0; i < length; ++i) {
        string[i] = (char) tolower(string[i]);
    }
    //Version 1
    char ch[] = "i";
    printf("Positions of %s character in a string:\n",ch);
    int index = 0;
    char a = string[length - 1];
    char *word = strtok(string, ch);
    if (strlen(word) != length) {
        if (string[0] == ch[0]) {
            index = 1;
            printf("%d\n", index);
        }
        while (word != NULL) {
            int len = strlen(word);
            if (index != 0 && index != 1) {
                printf("%d\n", index);
            }
            index = len + 1 + index;
            word = strtok(NULL, ch);
        }
        if (a == ch[0]) {
            index = length;
            printf("%d\n", index);
        }
    } else {
        printf("%s is not in the string.", ch);
    }
    //Version 2
    /*for (int j = 0; j < strlen(string); ++j) {
        if (string[j] == 'i') {
            printf("%d\n", j + 1);
        }
    }*/
}