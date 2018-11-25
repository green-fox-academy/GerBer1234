#include <iostream>
#include <string>

int main(int argc, char *args[]) {

    //Version 1
    /*std::string green[] = {"lime", "forest green", "olive", "pale green", "spring green"};
    std::string red[] = {"orange red", "red", "tomato"};
    std::string pink[] = {"orchid", "violet", "pink", "hot pink"};
    int gsize = sizeof(green) / sizeof(green[0]);
    int rsize = sizeof(red) / sizeof(red[0]);
    int psize = sizeof(pink) / sizeof(pink[0]);
    int csize = 0;
    if (gsize > rsize) {
        csize = gsize;
    } else if (gsize < rsize) {
        csize = rsize;
    } else if (gsize < psize && rsize < psize) {
        csize = psize;
    }
    std::string colors[3][csize];
    for (int i = 0; i < gsize; i++) {
        colors[0][i] = green[i];
        std::cout << colors[0][i] << ", ";
    }
    std::cout << std::endl;
    for (int i = 0; i < rsize; i++) {
        colors[1][i] = red[i];
        std::cout << colors[1][i] << ", ";
    }
    std::cout << std::endl;
    for (int i = 0; i < psize; i++) {
        colors[2][i] = pink[i];
        std::cout << colors[2][i] << ", ";
    }
    std::cout << std::endl;*/
    //Version 2
    std::string colors[3][5]={{"lime", "forest green", "olive", "pale green", "spring green"},
                              {"orange red", "red", "tomato"},{"orchid", "violet", "pink", "hot pink"}};
    for(int i = 0;i<3;i++){
        for(int j = 0;j<5;j++){
            std::cout << colors[i][j] << " ";
        }std::cout << std::endl;
    }
    return 0;
}