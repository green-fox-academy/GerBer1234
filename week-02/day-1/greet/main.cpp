#include <iostream>
#include <string>

std::string greet(std::string text);

int main(int argc, char* args[]) {

    std::string al = "Greenfox";
    greet(al);

    return 0;
}
std::string greet(std::string text){
    std::cout << "Greetings dear, " << text;
}