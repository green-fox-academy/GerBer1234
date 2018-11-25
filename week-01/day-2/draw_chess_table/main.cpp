#include <iostream>

int main() {
    int number;
    std::cout << "Give me a number, please " << std::endl;
    std::cin >> number;
    for(int i=0;i<number*2;i++){
        for(int j=0;j<number;j++) {
            std::cout << "% ";
        }
        std::cout << std::endl;
        if(i%2==0){

            std::cout << " ";
        }

    }
    return 0;
}