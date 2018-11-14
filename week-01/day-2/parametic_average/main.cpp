#include <iostream>

int main() {
    int number = 0;
    int ynum = 0;
    double sum = 0, avg = 0;
    int i;
    std::cout << "Give me a number, please" << std::endl;
    std::cin >> number;
    do
    {for(i = 1; i<=number;i++)
        {std::cout << "your number is" << std::endl;
        std::cin >> ynum;
        sum +=ynum;
        avg = sum/number;}}
        while (i<=number);
    {std::cout << "Sum: " << sum << std::endl;
    std::cout << "Average: " << avg << std::endl;}
    return 0;
}