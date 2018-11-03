#include <iostream>

int main(int argc, char* args[]) {

    std::string name = "Gergely Berenyi";
    int age = 37;
    double height = 1.86;
    bool marriage = false;

    std::cout << "My name is " << name << ". " << "I'm " << age << " years old. " << "My height is " << height << ". " << "Marriage: " << std::boolalpha << marriage << " " << std::endl;

    return 0;
}