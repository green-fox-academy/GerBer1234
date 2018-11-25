#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    int numlist[] = {3,4,5,6,7};
    for(int i=0;i<sizeof(numlist)/sizeof(numlist[0]);i++){
        numlist[i]*=2;
        std::cout << numlist[i] << std::endl;
    }// - Create an array variable named `numList`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Double all the values in the array

    return 0;
}