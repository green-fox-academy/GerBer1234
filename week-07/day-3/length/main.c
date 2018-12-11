#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lenghtWith(char *name);

int lenghtWithout(const char *name);

int main() {
    char name[] = "";
    printf("Give me your name, please: ");
    scanf("%s", name);
    printf("Lenght with string.h function: %d\n", lenghtWith(name));
    printf("Lenght without string.h function: %d\n", lenghtWithout(name));
    return 0;
}

int lenghtWith(char *name) {
    return strlen(name);
}

int lenghtWithout(const char *name) {
    int count = 0;
    while (name[count] != '\0') {
        count++;
    }
    return count;
}