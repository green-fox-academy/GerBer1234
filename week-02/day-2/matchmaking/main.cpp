#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> makingMatches(const std::vector<std::string> &girls, const std::vector<std::string> &boys) {
    int g = girls.size();
    int b = boys.size();
    std::vector<std::string> planet;
    int size = 0;
    if(g<b){
        size = b;
    }else {
        size = g;
    }
    for (int i = 0; i < size; i++) {
        if(i<g){
            planet.push_back(girls[i]);
        }
        if(i<b){
            planet.push_back(boys[i]);
        }
    }
    return planet;
}


int main(int argc, char *args[]) {
    std::vector<std::string> girls = {"Eve", "Ashley", "Claire", "Kat", "Jane"};
    std::vector<std::string> boys = {"Joe", "Fred", "Tom", "Todd", "Neef", "Jeff"};
    for (const auto &planet : makingMatches(girls, boys)) {
        std::cout << planet << " ";
    }

    return 0;
}