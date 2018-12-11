#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int search(const char str[], char ch);

int main() {
    char str[100];
    char ch;
    printf("Give me a string, please: ");
    gets(str);
    printf("Give me a character, please: ");
    scanf("%c", &ch);
    if (search(str, ch) != -1) {
        printf("The given character is in the string. The index of the first appearance is %d.",search(str, ch));
    } else {
        printf("The given character is not in the string.");
    }
    return 0;
}

int search(const char str[], char ch) {
    for (int i = 0; str[i]!='\0' ; ++i) {
        if(str[i]==ch){
            return i+1;
        }
    }return -1;
    /*Version 2
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ch) {
            return i+1;
        }
        i++;
    }
    return -1;

    Version 3
    char *e;
    e = strchr(str, ch);
    if(e!= nullptr){
        int index = (int)(e - str);
        return index+1;
    }
    return -1;*/
}