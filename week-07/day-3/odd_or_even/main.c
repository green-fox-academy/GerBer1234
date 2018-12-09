#include <stdio.h>
#include <stdlib.h>

int evenOdd(int num);

int main()
{
    int num = 0;
    printf("Give me a number, please:");
    scanf("%d",&num);
    if(evenOdd(num)){
        printf("Your number is an even number.");
    }else{
        printf("Your number is an odd number.");
    }
    // returns 1 if that number is even and returns 0 otherwise
    // (in this case 0 is an even number)

    return 0;
}

int evenOdd(int num){
    if(num%2==0){
        return 1;
    }else{
        return 0;
    }
}