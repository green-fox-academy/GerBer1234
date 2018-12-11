#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windef.h>

int count_between_chars(const char *word);

int main() {
    char *word = "Programming";
    printf("%d", count_between_chars(word));
    return 0;
}

int count_between_chars(const char *word) {
    int max = 0;
    int i = 0;
    int j = 0;
    while (word[i] != '\0') {
        j = i;
        while (word[j] != '\0') {
            if (word[j] == word[i] && (j - i > max))
                max = j - i;
            j++;
        }
        i++;
    }
    return max - 1;
}