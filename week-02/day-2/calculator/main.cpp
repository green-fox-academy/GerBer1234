#include <iostream>
#include <limits>

int calculate(char oper, int op1, int op2);

int main(int argc, char *args[]) {
    char oper = 0;
    int op1 = 0;
    int op2 = 0;
    bool numFail;
    std::cout << "Please type in the expression:" << std::endl;
    std::cout << "Choose an operation (+,-,*,/,%):";
    std::cin >> oper;
    if (oper == '+' || oper == '-' || oper == '*' || oper == '/' || oper == '%') {
        do {
            std::cout << "Enter your first number:";
            std::cin >> op1;
            numFail = std::cin.fail();
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } while (numFail);
        do {
            std::cout << "Enter your second number:";
            std::cin >> op2;
            numFail = std::cin.fail();
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } while (numFail);
        std::cout << "The result is " << calculate(oper, op1, op2) << ".";
    } else { std::cout << "This is not a valid operation."; }

    return 0;
}

int calculate(char oper, int op1, int op2) {
    if (oper == '+') {
        return op1 + op2;
    }
    if (oper == '-') {
        return op1 - op2;
    }
    if (oper == '*') {
        return op1 * op2;
    }
    if (oper == '/') {
        return op1 / op2;
    }
    if (oper == '%') {
        return op1 % op2;
    }
}