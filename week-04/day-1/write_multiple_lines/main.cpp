#include <iostream>
#include <fstream>
#include <string>

int write(const std::string &file, const std::string &word, int number);

int main() {
    std::string file, word;
    int number = 0;
    std::cout << "Give me a path: " << std::endl;
    std::cin >> file;
    std::cout << "Your word is: " << std::endl;
    std::cin >> word;
    std::cout << "How many times do you want to write it? " << std::endl;
    std::cin >> number;
    write(file, word, number);
    return 0;
}

int write(const std::string &file, const std::string &word, int number) {
    std::ofstream files(file, std::ios_base::app | std::ios_base::out);
    if (files.is_open()) {
        for (int i = 0; i < number; i++) {
            files << "\n" << word;
        }
    } else { std::cout << "can't open the file" << std::endl; }
}