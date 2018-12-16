#include <stdio.h>
#include <string.h>
#include <ctype.h>

void distance(char array[]);

int main() {
    char str[] = "This is a sample string";
    char *first, *last;
    distance(str);
    return 0;
}

void distance(char array[]) {
    for (int i = 0; i < strlen(array); ++i) {
        array[i] = (char) tolower(array[i]);
    }
    char *first = 0, *last = 0;
    char ch = 's';
    //Version 1
    int result = 0;
    first = strchr(array, ch);
    last = strrchr(array, ch);
    if (first != NULL || last != NULL) {
        result = strlen(first) - strlen(last);
        printf("Distance between the first and the last occurrence of %c is %d.\n", ch, result);
    } else {
        printf("The given character, %c is not in the string.\n", ch);
    }
    //Version 2
    /*for (int i = 0; i < strlen(array); ++i) {
        if (array[i] == ch) {
            first = (char *) i;
            break;
        } else {
            first = (char *) -1;
        }
    }
    for (int i = 0; i < strlen(array); ++i) {
        if (array[i] == ch) {
            last = (char *) i;
        }
    }
    if (first == (char *) -1) {
        printf("The given character, %c is not in the string.\n", ch);
    } else {
        printf("Distance between the first and the last occurrence of %c is %d.\n", ch, (int) (last - first));
    }*/
}