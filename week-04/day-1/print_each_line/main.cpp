#include <iostream>
#include <fstream>
#include <string>

int main () {

    std::ifstream file("my-file.txt");
    std::string sg;
    while(file >> sg){
        std::cout << sg;
    }
    // Write a program that opens a file called "my-file.txt", then prints
    // each of lines form the file.
    // You have to create the file, you can use C-programming but it is not mandatory

    return 0;
}