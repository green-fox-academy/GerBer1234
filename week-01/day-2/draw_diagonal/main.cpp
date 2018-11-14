#include <iostream>
#include<cmath>

int main() {
    int num;
    std::cin >> num;
    for(int row=0;row<num;row++)
    {
        for(int col=0;col<num;col++) {
            if (row == 0 || row == num - 1 || col == 0 || col == num - 1 || row == col)
                std::cout << "%";
            else
                std::cout << " ";
        }std::cout << std::endl;}
    return 0;
}