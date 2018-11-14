#include <iostream>

int main(int argc, char* args[]) {

    int number = 8;
    int guess = 0;
    do{
        std::cout << "Your number is " << std::endl;
        std::cin >> guess;
        if (guess<number)
            std::cout << "The stored number is higher" << std::endl;
        else if (guess>number)
            std::cout << "The stored number is lower" << std::endl;
        else
            std::cout << "You found the number: " << number << std::endl;}
          while(guess != number);
    return 0;
}