#include <iostream>

int main()
{
    int a,b,c,d,e;
    std::cout << "Give me five numbers, please" << std::endl;
    std::cin >> a >> b >> c >> d >> e;
    int numbers[] = {a,b,c,d,e};
    int *numbersPointer = numbers;
    for(int i=0;i<sizeof(numbers)/sizeof(numbers[0]);i++)
    {
        std::cout << numbersPointer[i] << std::endl;
    }

    return 0;
}