#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream file("my-file.txt", std::ios_base::app | std::ios_base::out);
    if (file.is_open()) { file << "\nBerenyi Gergely"; }
    else std::cout << "can't open it";
    file.close();
    return 0;
}