#include <iostream>
#include <string>

std::string reverse(const std::string &text) {
    std::string str = text;
    int length = text.length();
    for(int i = 0;i<length/2;i++){
        std::swap(str[i],str[length-i-1]);
    }
    return str;
}

int main(int argc, char *args[]) {
    std::string reversed = ".eslaf eb t'ndluow ecnetnes siht ,dehctiws erew eslaf dna eurt fo sgninaem eht fI";
    std::cout << reverse(reversed) << std::endl;

    return 0;
}