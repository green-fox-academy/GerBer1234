#include <iostream>
#include <algorithm>
#include <vector>

bool checkNums(const std::vector<int> &number, const std::vector<int> &check);

int main(int argc, char* args[])
{
    const std::vector<int> numbers = {2, 4, 6, 8, 10, 12, 14, 16};
    const std::vector<int> checker = {4, 8, 10, 16};
    if(checkNums(numbers, checker)){
        std::cout << "Good :)" << std::endl;
    }
    else{
        std::cout << "Not Good :(" << std::endl;
    }

    return 0;
}
bool checkNums(const std::vector<int> &number, const std::vector<int> &check){
    int value = 0;
    for(int i=0;i<number.size();i++){
        if(std::find(number.begin(),number.end(),check[i])!=number.end()){
            value++;
            if(value==check.size()){
                return true;
            }
        }else{
            return false;
        }
    }
}