#include <iostream>
#include <string>

std::string xtoy(std::string text, int length);

int main() {
    std::string text;
    int length = 0;
    std::cout << "Write some text witch contains 'x'" << std::endl;
    std::cin >> text;
    std::cout << xtoy(text, length);

    return 0;
}

std::string xtoy(std::string text, int length) {
    if (length > text.size()) { return text; }
    else if (text[length] == 'x') {
        text[length] = 'y';
        return xtoy(text, length + 1);
    } else { return xtoy(text, length + 1); }
}