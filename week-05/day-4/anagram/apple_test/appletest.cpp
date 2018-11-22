//appletest.cpp
#include <gtest/gtest.h>
#include "apple.h"

TEST(apple_check, test_apple){
    EXPECT_EQ(getApple(), "apple");
}
TEST(string_check, test_text){
    std::string text1 = "alma";
    std::string text2 = "lama";
    EXPECT_EQ(anagram(text1,text2), true);
}
