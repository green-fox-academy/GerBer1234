#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand((unsigned int) time(NULL));
    int num = rand() % 10 + 1;
    int own = 0;
    do{
        printf("Guess the number:");
        scanf("%d",&own);
        if(own<num){
            printf("The stored number is higher\n");
        }else if(own>num){
            printf("The stroed number is lower\n");
        }
    }while(own!=num);
    printf("You found the number: %d",own);
    return 0;
}