#include <iostream>

int main(int argc, char* args[]) {

    double a,b,c;
    a = 9;
    b = 10;
    c = 11;
    double S = 2*(a*b+b*c+a*c);
    double V = a*b*c;
    std::cout << "Surface Area: " << S << std::endl;
    std::cout << "Volume: " << V << std::endl;

    return 0;
}