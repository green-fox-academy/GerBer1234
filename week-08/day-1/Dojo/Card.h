#ifndef DAY_1_CARD_H
#define DAY_1_CARD_H
#include <iostream>
#include <vector>
enum class Suit{
    CLUB,
    DIAMOND,
    HEART,
    SPADE
};
enum class Value{
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    ACE
};

class Card {
public:
    Card(Suit _suit, Value _value);
protected:
    Suit _suit;
    Value _value;
public:
    Value get_value() const;
};
int winner(std::vector<Card>player1,std::vector<Card>player2);
int pair(std::vector<Card>player1,std::vector<Card>player2);

#endif //DAY_1_CARD_H
