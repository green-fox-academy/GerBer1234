#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

std::vector<std::string> filter(std::vector<std::string> list, std::vector<std::string> sweets);

int main(int argc, char *args[]) {
    const std::vector<std::string> sweets = {"Cupcake", "Brownie"};
    std::vector<std::string> list = {"Cupcake", "Carrot", "Bread", "Brownie", "Lemon"};
    for (const auto &sweet : filter(list, sweets)) {
        std::cout << sweet << " ";
    }
    return 0;
}

std::vector<std::string> filter(std::vector<std::string> list, std::vector<std::string> sweets) {
    bool sweetIn;
    for (int i = 0; i < list.size(); i++) {
        sweetIn = std::find(sweets.begin(), sweets.end(), list[i]) != sweets.end();
        if (!sweetIn) {
            list.erase(list.begin() + i);
            --i;
        }
    }
    return list;
}