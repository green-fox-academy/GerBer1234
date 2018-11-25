#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    int p1[] = {1,2,3};
    int p2[] = {4,5};
    if(sizeof(p2)/sizeof(p2[0])>sizeof(p1)/sizeof(p1[0])){
        std::cout << "p2 has more elements than p1. Awesome.";
    }else {
        std::cout << "p1 has more elements. Not awesome.";
    }

    return 0;
}