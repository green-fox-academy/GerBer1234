#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_in_sentence(char *word, char *sentence);

int main() {
    char *word = "apple";
    char *sentence = "An apple a day keeps the doctor away.";
    printf("%d", is_in_sentence(word, sentence));
    return 0;
}

int is_in_sentence(char *word, char *sentence) {
    int s = strlen(sentence);
    //char *sentences=(char *)malloc((s+1)*sizeof(char));
    char sentences[100];
    for (int i = 0; sentence[i]; i++) {
        sentences[i] = (char) tolower(sentence[i]);
    }
    int w = strlen(word);
    //char *words=(char *)malloc((w+1)*sizeof(char));
    char words[100];
    for (int i = 0; word[i]; i++) {
        words[i] = (char) tolower(word[i]);
    }

    if (strstr(sentences, words) != (char *) NULL) {
        /*free(words);
        free(sentences);*/
        return 1;
    } else {
        /*free(words);
        free(sentences);*/
        return 0;
    }

}