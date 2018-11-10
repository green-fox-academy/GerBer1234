#include <iostream>

int main(int argc, char* args[]) {

    int chickens = 0;
    int pigs = 0;
    int legs = 0;
    std::cout << "How many chickens do you have?" << std::endl;
    std::cin  >> chickens;
    std::cout << "How many pigs do you have?" << std::endl;
    std::cin >> pigs;
    legs = chickens*2+pigs*4;
    std::cout << "You have " << legs << " animal legs in your farm." << std::endl;

    return 0;
}