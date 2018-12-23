#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int read_from_file(char *filename);

int most_common(const int count[1000]);

void remove_chars(char *words, const char *char_to_remove);

int main() {

    if (read_from_file("file.txt") != -1) {
        printf("The most common word in the file: %s", (char *) read_from_file("file.txt"));
    } else {
        printf("Can't open the file.");
        return -1;
    }
    return 0;
}

int read_from_file(char *filename) {
    int i = 0;
    int len = 0;
    int index = 0;
    int unique = 0;
    char words[1000][50];
    char word[50];
    int count[1000];
    FILE *fp;
    fp = fopen(filename, "r");
    if (fp == NULL) {
        return -1;
    }
    for (i = 0; i < 1000; i++) {
        count[i] = 0;
    }
    while (fscanf(fp, "%s", word) != EOF) {
        strlwr(word);
        len = strlen(word);
        if (ispunct(word[len - 1]))
            word[len - 1] = '\0';
        remove_chars(word, "\"");
        unique = 1;
        for (i = 0; i < index && unique; i++) {
            if (strcmp(words[i], word) == 0) {
                unique = 0;
            }
        }
        if (unique == 1) {
            strcpy(words[index], word);
            count[index]++;
            index++;
        } else {
            count[i - 1]++;
        }
    }
    most_common(count);
    fclose(fp);
    char *result = words[most_common(count)];
    return (int) result;
}

int most_common(const int count[1000]) {
    int max = count[0];
    int index = 0;
    for (int j = 0; j < 1000; ++j) {
        if (count[j] > max) {
            max = count[j];
            index = j;
        }
    }
    return index;
}

void remove_chars(char *words, const char *char_to_remove) {
    int rem[256] = {};
    if (NULL == words || NULL == char_to_remove) {
        return;
    }
    while (*char_to_remove) {
        rem[*char_to_remove++] = 1;
    }
    char *dest = words;
    while (*words) {
        if (!rem[*words]) {
            *dest++ = *words;
        }
        words++;
    }
    *dest = '\0';
}