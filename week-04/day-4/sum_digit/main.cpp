#include <iostream>

int sumDigit(int n);
// Given a non-negative int n, return the sum of its digits recursively (no loops).
// Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6), while
// divide (/) by 10 removes the rightmost digit (126 / 10 is 12).

int main() {

    int num;
    std::cout << "give me a positive number, please " << std::endl;
    std::cin >> num;
    sumDigit(num);
    return 0;
}
int sumDigit(int n,int sum){
    if(n>0){
    sum=sum+n%10;
    n=n/10;
    return sum;}
    else {std::cout << "Wrong. A positive number, please.";}
}