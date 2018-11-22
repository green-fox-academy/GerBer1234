//apple.cpp
#include "apple.h"
#include <algorithm>
#include <iostream>

std::string getApple()
{
    return "apple";
}

bool anagram(std::string text1, std::string text2) {
    if(text1.size()==text2.size()) {
        std::sort(text1.begin(), text1.end());
        std::sort(text2.begin(), text2.end());
        return text1 == text2;
    }return false;
}
