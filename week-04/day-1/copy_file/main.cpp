#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


int copy(const std::string &fileI, const std::string &fileO);

int main() {

    std::string fileI, fileO;
    std::cin >> fileI;
    std::cin >> fileO;
    copy(fileI, fileO);
    return 0;
}

int copy(const std::string &fileI, const std::string &fileO) {
    std::ifstream filesI(fileI);
    std::ofstream filesO(fileO);
    std::string lines;
    if (filesI.is_open()) {
        while (getline(filesI, lines)) {
            if (filesO.is_open()) {
                filesO << lines << "\n";
            } else { std::cout << "Can't copy the file."; }
        }
    } else { std::cout << "Can't find the file."; }
    if (filesI.is_open() && filesO.is_open()) {
        std::cout << "Well done. Everything is fine.";
    } else { "Copy failed."; }
}
