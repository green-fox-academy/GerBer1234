#include <iostream>

int main(int argc, char* args[]) {

    int num = 0;
    std::cout << "Give me a number, please" << std::endl;
    std::cin >> num;
    for(int i=0;i<10;i++)
    {std::cout << i+1 << " * " << num << " = " << ((i+1)*num) << std::endl;}

    return 0;
}