#include <iostream>
#include <string>

std::string appendAFunc(const std::string &text);
int main(int argc, char* args[]) {

    std::string typo = "Chinchill";

    std::cout << appendAFunc(typo);
    return 0;
}
std::string appendAFunc(const std::string &text){
    return text+"a";
}