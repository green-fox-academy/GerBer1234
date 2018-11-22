//appletest.cpp
#include <gtest/gtest.h>
#include "apple.h"
#include <vector>

TEST(apple_check, test_apple) {
    EXPECT_EQ(getApple(), "apple");
}
TEST(sum_check,test_sum) {
    std::vector<int> summa = {1, 2, 3, 4};
    ASSERT_EQ(sum(summa), 10);
}
TEST(sum_check,test_sum2){
    std::vector<int>summa={};
    ASSERT_EQ(sum(summa),0);
}
TEST(sum_check,test_sum3){
    std::vector<int>summa={4};
    ASSERT_EQ(sum(summa),4);
}
TEST(sum_check,test_sum4){
    std::vector<int>summa={-1,-2,-3};
    ASSERT_EQ(sum(summa),-6);
}