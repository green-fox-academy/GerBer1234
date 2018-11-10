#include <iostream>
#include <string>
#include <cmath>

int main(int argc, char* args[]) {

    int a = 3;
    a += 10;
    std::cout << a << std::endl;

    int b = 100;
    b -= 7;
    std::cout << b << std::endl;

    int c = 44;
    c *= 2;
    std::cout << c << std::endl;

    int d = 125;
    d /= 5;
    std::cout << d << std::endl;

    int e = 8;
    e = e*e*e;
    std::cout << e << std::endl;

    int f1 = 123;
    int f2 = 345;
    bool v = f1 > f2;
    std::cout << "f1 bigger than f2: " << std::boolalpha << v << std::endl;

    int g1 = 350;
    int g2 = 200;
    bool w = g2*2 > g1;
    std::cout <<"The double of g2 is bigger than g1: " <<std::boolalpha << w << std::endl;

    int h = 135798745;
    bool x = h%11==0;
    std::cout <<"11 is a divisor of "<< h << ": " <<std::boolalpha << x << std::endl;

    int i1 = 10;
    int i2 = 3;
    bool y = i1>pow(i2,2) && i1<pow(i2,3);
    std::cout << "i1 higher than i2 squared and smaller than i2 cubed: " << std::boolalpha << y << std::endl;

    int j = 1521;
    bool z = j%3 == 0 || j%5 == 0;
    std::cout << "j is dividable by 3 or 5: " << std::boolalpha << z << std::endl;

    std::string k = "Apple";
    k=k+k+k+k;
    std::cout << k << std::endl;

    return 0;
}