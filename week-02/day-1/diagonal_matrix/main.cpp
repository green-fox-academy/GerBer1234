#include <iostream>
#include <string>
void twodimensional(int row, int column);

int main(int argc, char *args[]) {
    int row = 0, column = 0;
    std::cout << "Row(s): ";
    std::cin >> row;
    std::cout << "Column(s): ";
    std::cin >> column;
    std::cout << "The elements of the two dimensional array is:" << std::endl;
    twodimensional(row,column);
    return 0;
}
void twodimensional(int row, int column){
    int multi[row][column];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (i == j) {
                multi[i][j] = 1;
            } else {
                multi[i][j] = 0;
            }std::cout <<multi[i][j] << " ";
        }std::cout <<std::endl;
    }
}