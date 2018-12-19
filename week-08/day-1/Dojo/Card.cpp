#include "Card.h"
#include <vector>

Card::Card(Suit _suit, Value _value) : _suit(_suit), _value(_value) {}

Value Card::get_value() const {
    return _value;
}

int winner(std::vector<Card> player1, std::vector<Card> player2) {
    Value max1 = Value::TWO;
    Value max2 = Value::TWO;
    for (int i = 0; i < player1.size(); ++i) {
        if (player1[i].get_value() > max1) {
            max1 = player1[i].get_value();
        }
    }
    for (int i = 0; i < player2.size(); ++i) {
        if (player2[i].get_value() > max2) {
            max2 = player2[i].get_value();
        }
    }
    if (max1 > max2) {
        return 1;
    } else if(max1<max2){
        return 0;
    }else{
        return -1;
    }
}

int pair(std::vector<Card> player1, std::vector<Card> player2) {
    int counter1 = 0;
    for (int i = 0; i < player1.size(); ++i) {
        for (int j = 0; j < player1.size(); ++j) {
            if(player1[i].get_value()==player1[j].get_value()){
            counter1++;
            }
        }
    }
    int counter2 = 0;
    for (int i = 0; i < player2.size(); ++i) {
        for (int j = 0; j < player2.size(); ++j) {
            if(player2[i].get_value()==player2[j].get_value()){
                counter2++;
            }
        }
    }
    if(counter1>counter2){
        return counter1/2;
    }else{
        return counter2/2;
    }
}

