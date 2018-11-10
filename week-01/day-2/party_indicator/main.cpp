#include <iostream>

int main(int argc, char* args[]) {

    int girls;
    int boys;
    std::cout << "Number of girls: " << std::endl;
    std::cin >> girls;
    std::cout << "Number of boys: " << std::endl;
    std::cin >> boys;
    if(girls==boys && girls+boys>19)
    {
        std::cout << "The party is excellent!" << std::endl;
    }
    else if (girls==0)
    {
        std::cout << "Sausage party!" << std::endl;
    }
    else if (girls+boys<20)
    {
        std::cout << "Average party..." << std::endl;
    }
    else if (girls+boys>19 && girls!=boys)
    {
        std::cout << "Quiet cool party!" << std::endl;
    }

    return 0;
}