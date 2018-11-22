//apple.cpp
#include "apple.h"
#include <iostream>

std::string getApple()
{
    return "apple";
}

int sum(std::vector<int> summa) {
    int sm = 0;
    for (int i : summa) {
        sm+= i;
    }
    return sm;
}
