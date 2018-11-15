#include <iostream>
#include <string>

std::string asterik(std::string text, unsigned int i);

int main() {
    std::string text;
    int i = 0;
    std::cout << "Write some text, please" << std::endl;
    std::cin >> text;
    std::cout << asterik(text, i);

    return 0;
}

std::string asterik(std::string text, unsigned int i) {
    if (i > text.size() - 1) {
        return text;
    } else if (i == 0) {
        return asterik(text, i + 1);
    } else {
        text.insert(i, "*");
        return asterik(text, i + 2);
    }
}