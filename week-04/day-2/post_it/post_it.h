#ifndef POST_IT_POST_IT_H
#define POST_IT_POST_IT_H
#include <iostream>

class PostIt {
public:
    PostIt(std::string backgroundColor,std::string text, std::string textColor);
    std::string getBackgroundColor();
    std::string getText();
    std::string getTextColor();
private:
    std::string _backgroundColor;
    std::string _text;
    std::string _textColor;
};


#endif //POST_IT_POST_IT_H
