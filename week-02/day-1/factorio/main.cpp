#include <iostream>
#include <string>

int factorio(int number);

int main(int argc, char* args[]) {

    int num=1;
    std::cout << "Give me a number, please" << std::endl;
    std::cin >> num;
    factorio(num);

    return 0;
}

int factorio(int number){
    int fakt=1;
    for(int i=1;i<=number;i++) {
        fakt=fakt*i;
    }
    std::cout << fakt << std::endl;
}