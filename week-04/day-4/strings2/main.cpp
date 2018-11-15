#include <iostream>
#include <string>

std::string nox(std::string text, int length);

int main() {
    std::string text;
    int length = 0;
    std::cout << "Write some text, please'" << std::endl;
    std::cin >> text;
    std::cout << nox(text, length);

    return 0;
}

std::string nox(std::string text, int length) {
    if (length > text.size()) { return text; }
    else if (text[length] == 'x') {
        text[length] = '\0';
        return nox(text, length + 1);
    } else { return nox(text, length + 1); }
}