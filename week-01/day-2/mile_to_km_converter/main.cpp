#include <iostream>

int main(int argc, char* args[]) {

    int distance = 0;
    std::cout << "How far is the next town (km)?" << std::endl;
    std::cin >> distance;
    std::cout << "In mile: " << double (distance*0.621371192) << std::endl;

    return 0;
}