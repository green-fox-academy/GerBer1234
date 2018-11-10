#include <iostream>

int main(int argc, char* args[]) {

    int number = 0;
    std::cout << "Your number is " << std::endl;
    std::cin >> number;
    if (number%2==0)
    {
        std::cout << "Your number is even." << std::endl;
    }
    else
    {
        std::cout << "Your number is odd." << std::endl;
    }

    return 0;
}