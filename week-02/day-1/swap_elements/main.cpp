#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    std::string abc[]={"first","second","third"};
    std::string swap = abc[0];
    abc[0]=abc[2];
    abc[2]=swap;
    for(int i=0;i<sizeof(abc)/sizeof(abc[0]);i++){
        std::cout << abc[i] << " ";
    }
    return 0;
}