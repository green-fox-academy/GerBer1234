#include <iostream>

int main(int argc, char* args[]) {

    int number = 0;
    std::cout << "Give me a number, please" << std::endl;
    std::cin >> number;
    for(int i=0;i<=number;i++)
    {
        for(int j=number-1;j>=i;j--)
            {std::cout << " ";}
        for(int k=1;k<=(2*i-1);k++)
            {std::cout << "*";}
        std::cout << std::endl;
    }

    return 0;
}