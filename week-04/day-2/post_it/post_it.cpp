//
// Created by Béka on 2018. 11. 13..
//

#include "post_it.h"

std::string PostIt::getBackgroundColor() {
    return _backgroundColor;
}

std::string PostIt::getText() {
    return _text;
}

std::string PostIt::getTextColor() {
    return _textColor;
}

PostIt::PostIt(std::string backgroundColor, std::string text, std::string textColor) {
    _backgroundColor = backgroundColor;
    _text = text;
    _textColor = textColor;
    std::cout << "Ready" << std::endl;
}
