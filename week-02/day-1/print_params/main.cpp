#include <iostream>
#include <string>
#include <list>

void printParams(std::list<std::string> list);

int main(int argc, char *args[]) {
    std::list<std::string>list = {"first"};
    printParams(list);
    std::list<std::string>list1 = {"first","second"};
    printParams(list1);
    std::list<std::string>list2 = {"first","second","third","fourth"};
    printParams(list2);
    return 0;
}

void printParams(std::list<std::string> list) {
    for (const std::string &i:list){
        std::cout <<i << std::endl;
    }
}