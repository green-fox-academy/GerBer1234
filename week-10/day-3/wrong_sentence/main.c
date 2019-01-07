#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[] = "He said he was Not there yesterday; however, Many people saw him there.";
    int length = strlen(text);
    char temp[length];
    for (int i = 0; i < length; ++i) {
        temp[i] = (char) tolower(text[i]);
    }
    for (int j = 1; j < length; ++j) {
        if (temp[j] != text[j]) {
            int k = j;
            while (temp[k] != ' ') {
                printf("%c", text[k]);
                k++;
            }
            printf("\n");
        }
    }
    return 0;
}