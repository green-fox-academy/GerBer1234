#include <iostream>
#include <fstream>
#include <string>

int main () {

    std::ifstream file("my-file.txt");
    std::string sg;
    if(file.is_open()){
    while(getline(file,sg)){
        std::cout << sg << "\n";}
    } else
        std::cout << "fail";

    return 0;
}