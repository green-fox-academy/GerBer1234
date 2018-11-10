#include <iostream>

int main(int argc, char* args[]) {

    int number = 0;
    std::cout << "Give me a number, please" << std::endl;
    std::cin >> number;
    for(int i=1;i<=number;i++)
    {
        for(int j=1;j<=number-i;j++)
        {std::cout << " ";}
        for(int k=1;k<=2*i-1;k++)
        {std::cout << "*";}
        std::cout << std::endl;
    }
    for(int i=number-1;i>=1;i--)
    {
        for(int j=1;j<=number-i;j++)
        {std::cout << " ";}
        for(int k=1;k<=2*i-1;k++)
        {std::cout << "*";}
        std::cout << std::endl;
    }
    return 0;
}