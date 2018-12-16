#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char data[150];
    char *first_name = "";
    char *last_name = "";
    int age = 0;
    puts("Give me your full name and age, please (use space between them): ");
    gets(data);
    //Version 1
    /*char *word = strtok(data, " ");
    int counter = 0;
    while (word != NULL) {
        counter++;
        if (counter == 1) {
            first_name = word;
        } else if (counter == 2) {
            last_name = word;
        } else if (counter == 3) {
            //age = strtol(word, (char **)NULL,10);
            for (int i = 0; i < strlen(word); ++i) {
                age = age * 10 + word[i] - '0';
            }
        }
        word = strtok(NULL, " ");
    }*/
    //Version 2
    first_name = strtok(data, " ");
    last_name = strtok(NULL, " ");
    if(first_name==NULL){
        printf("Muhahaha");
    }else if(last_name == NULL){
        printf("Muhahaha");
    }else {
    age = strtol(strtok(NULL, " "), (char **) NULL, 10);
    if(age < 0 || age>110){
        printf("Not possible.");
    }else {
        printf("Your name is: %s %s and you are %d years old", first_name, last_name, age);
    }}
    return 0;
}