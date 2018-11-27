#include <iostream>
#include <string>

int main(int argc, char *args[]) {
    std::string quote("Hofstadter's Law: It you expect, even when you take into account Hofstadter's Law.");
    std::string str = "It always takes longer than";
    std::string start = "It";
    int start_pos = quote.find(start);
    if (start_pos == std::string::npos) {
        std::cout << "Not in the text.";
    } else {
        quote.replace(static_cast<unsigned int>(start_pos), start.length(), str);
    }
    std::cout << quote << std::endl;
    return 0;
}