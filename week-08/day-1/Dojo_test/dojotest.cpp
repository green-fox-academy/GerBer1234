#include <gtest/gtest.h>
#include "Card.h"

TEST(winner_check,test_winner){
    std::vector<Card> player1;
    Card card1(Suit::HEART, Value::TWO);
    player1.push_back(card1);
    std::vector<Card> player2;
    Card card2(Suit::CLUB, Value::THREE);
    player2.push_back(card2);
    EXPECT_EQ(winner(player1,player2),-1);
}
TEST(pair_check,test_pair){
    std::vector<Card> player1;
    Card card1(Suit::HEART, Value::TWO);
    Card card2(Suit::CLUB, Value::FIVE);
    player1.push_back(card1);
    player1.push_back(card2);
    std::vector<Card> player2;
    Card card3(Suit::CLUB, Value::THREE);
    Card card4(Suit::CLUB, Value::TWO);
    player2.push_back(card3);
    player2.push_back(card4);
    EXPECT_EQ(pair(player1,player2),2);
}