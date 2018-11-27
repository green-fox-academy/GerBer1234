#include <iostream>
#include <algorithm>
#include <vector>

std::string containsSeven(const std::vector<int> &numbers) {
    std::vector<int> temp = numbers;
    for (int i = 0; i < temp.size(); i++) {
        if (temp[i] == 7) {
            return "Hoorray";
        }
    }
    return "Noooooo";
}

std::string containsSeven_stdfind(const std::vector<int> &numbers) {
    std::vector<int> temp = numbers;
    if (std::find(temp.begin(), temp.end(), 7) != temp.end()) {
        return "Hoorray";
    } else {
        return "Noooooo";
    }
}

int main(int argc, char *args[]) {
    const std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::cout << containsSeven(numbers) << std::endl;
    std::cout << containsSeven_stdfind(numbers) << std::endl;
    return 0;
}