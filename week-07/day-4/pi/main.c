#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int area(int radius);

int main()
{
    printf("%d",area(10));
    return 0;
}

int area(int radius){
    return (int) (radius * radius * PI);
}