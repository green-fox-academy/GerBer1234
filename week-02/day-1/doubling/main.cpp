#include <iostream>
#include <string>

int doubling(int num);

int main(int argc, char* args[]) {

    int baseNum = 123;
    std::cout << doubling(baseNum);

    return 0;
}

int doubling(int num){
    return num*2;
}