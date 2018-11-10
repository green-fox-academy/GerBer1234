#include <iostream>

int main(int argc, char* args[]) {

    int num1, num2;
    std::cout << "Give me two numbers, please" << std::endl;
    std::cin >> num1 >> num2;
    if(num2<=num1){std::cout << "The second number should be bigger" << std::endl;}
    else {for(int i=0;i<num2-num1;i++){std::cout << num1+i << std::endl;}}

    return 0;
}