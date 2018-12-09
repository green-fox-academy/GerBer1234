#include <stdio.h>
#include <stdlib.h>

int equal(int a,int b);

int main()
{
    int a=0,b=0;
    printf("Give me two numbers, please\n");
    printf("First: ");
    scanf("%d",&a);
    printf("Second: ");
    scanf("%d",&b);
    if(equal(a, b)){
        printf("They are equal.");
    }else{
        printf("They are not equal.");
    }
}
int equal(int a, int b){
    if(a==b){
        return 1;
    }else{
        return 0;
    }
}