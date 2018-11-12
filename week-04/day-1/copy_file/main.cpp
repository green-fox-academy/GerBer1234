#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


void copy(const std::string &fileI, const std::string &fileO);

int main() {

    std::string fileI, fileO;
    std::cin >> fileI;
    std::cin >> fileO;
    copy(fileI, fileO);
    return 0;
}

void copy(const std::string &fileI, const std::string &fileO) {
    std::ifstream filesI(fileI);
    std::ofstream filesO(fileO);
    std::string lines;
    if (filesI.is_open() && filesO.is_open()) {
        while (getline(filesI, lines)) {
            filesO << lines << "\n";
        }
        std::cout << "Well done. You copied the file.";
    } else { std::cout << "Can't copy the file."; }
}
