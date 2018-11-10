#include <iostream>

int main(int argc, char* args[]) {

    int num1 = 0;
    int num2 = 0;
    std::cout << "First number is:" << std::endl;
    std::cin >> num1;
    std::cout << "Second number is:" << std::endl;
    std::cin >> num2;
    if (num1>num2)
    {
        std::cout << "The first number, " << num1 << " is the bigger." << std::endl;
    }
    else if (num2>num1)
    {
        std::cout << "The second number, " << num2 << " is the bigger." << std::endl;
    }

    return 0;
}