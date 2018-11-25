#include <iostream>
#include <string>

int main(int argc, char *args[]) {

    std::string animals[] = {"koal", "pand", "zebr"};
    for (int i = 0; i < sizeof(animals) / sizeof(animals[0]); i++) {
        animals[i] += "a";
        std::cout << animals[i] << " ";
    }
    return 0;
}