#include <iostream>
#include <string>

int sum(int number);
int main(int argc, char* args[]) {

    int num;
    std::cout << "Give me a number, please" << std::endl;
    std::cin >> num;
    std::cout << sum(num);
    return 0;
}
int sum(int number){
    int x=0;
    for(int i=1;i<=number;i++){
        x+=i;
    }
    return x;
}