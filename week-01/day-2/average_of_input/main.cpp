#include <iostream>

int main(int argc, char* args[]) {

    int first = 0, second = 0, third = 0, fourth = 0, fifth = 0;
    int sum = 0;
    double avg = 0;
    std::cout << "Please, give mmmme five numbers: " << std::endl;
    std::cin >> first >> second >> third >> fourth >> fifth;
    sum = first+second+third+fourth+fifth;
    avg = sum/5;
    std::cout << "Sum of these numbers: " << sum << ", average of these numbers: " << avg << std::endl;

    return 0;
}