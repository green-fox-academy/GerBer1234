#include <stdio.h>
#include <string.h>

void split(char sentence[]);

int main() {
    printf("Type in a sentence:\n\n");
    char string[256];
    gets(string);
    split(string);
    return (0);
}

void split(char sentence[]) {
    char *word = strtok(sentence, " ");
    while (word != NULL) {
        printf("%s\n", word);
        word = strtok(NULL, " ");
    }
}