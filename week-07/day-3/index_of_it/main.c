#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_in_sentence(const char *sentence, const char *word);

int main() {
    char *word = "doctor";
    char *sentence = "An apple a day keeps the doctor away.";
    printf("%d", is_in_sentence(sentence, word));
    return 0;
}

int is_in_sentence(const char *sentence, const char *word) {
    int counter = 0;
    for (int i = 0; sentence[i] != '\0'; ++i) {
        if (sentence[i] == ' ') {
            counter++;
        } else if (sentence[i] == word[0]) {
            int bool = 1;
            int newI = i;
            for (int j = 0; word[j] != '\0'; ++j) {
                if (sentence[newI] != word[j]) {
                    bool = 0;
                    break;
                }
                newI++;
            }
            if (bool == 1) {
                return counter;
            }
        }
    }
    return 0;
}