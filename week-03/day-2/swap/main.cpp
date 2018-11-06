#include <iostream>

void swap(int *x, int *y);

int main ()
{
    // Create a function which swaps the values of 'a' and 'b'
    // This time use a void funtion and pointers

    int a = 10;
    int b = 316;

    swap(&a,&b);
    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;
    return 0;
}

void swap (int *x, int *y)
{int z;
z=*x;
*x=*y;
*y=z;
}