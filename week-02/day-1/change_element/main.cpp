#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    int s[] = {1,2,3,8,5,6};
    for (int i = 0; i <sizeof(s)/sizeof(s[i]);i++){
        if(s[i]==8){
            s[i]=4;
        }
    }
    std::cout << "The fourth element is " << s[3] << "." << std::endl;
    return 0;
}