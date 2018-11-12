#include <iostream>
#include <fstream>
#include <string>

int count(const std::string &fname);

int main() {
    std::string filename;
    std::cin >> filename;
    std:: cout << count(filename);
    return 0;
}

int count(const std::string &fname) {
    std::ifstream file(fname);
    std::string line;
    int counter = 0;
    if (file.is_open()) {
            while (getline(file, line)) {
                counter++;
            }
            return counter;
        } else
            return 0;
    }
