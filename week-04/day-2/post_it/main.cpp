#include <iostream>
#include "post_it.h"

int main() {
    PostIt postIt1("orange","Idea 1","blue");
    std::cout << postIt1.getBackgroundColor();
    PostIt postIt2("pink","Awesome","black");
    std::cout << postIt2.getBackgroundColor();
    PostIt postIt3("yellow","Superb!","green");
    std::cout << postIt3.getBackgroundColor();
    return 0;
}