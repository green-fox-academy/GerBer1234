#include <iostream>

int main(int argc, char* args[]) {

    int number = 0;
    std::cout << "What is yor number?" << std::endl;
    std::cin >> number;
    if(number<=0)
    {
        std::cout << "Not enough" << std::endl;
    }
    else if (number==1)
    {
        std::cout << "One" << std::endl;
    }
    else if (number==2)
    {
        std::cout << "Two" << std::endl;
    }
    else if (number>2)
    {
        std::cout << "A lot" << std::endl;
    }
    return 0;
}