#include <iostream>

int main(int argc, char* args[]) {

    int number = 0;
    std::cout << "Your number is " << std::endl;
    std::cin >> number;
    for(int i=0;i<=number;i++)
    {for(int j=0;j<i;j++){std::cout << "*";}std::cout << std::endl;}

    return 0;
}