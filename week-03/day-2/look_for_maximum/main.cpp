#include <iostream>

int main()
{
    std::cout << "Give me the size of the array, please: ";
    int size = 0;
    std::cin >> size;
    int numbers[size];
    for(int i = 0; i<size;i++){
        std::cout << "Give me a number, please:";
        std::cin >> numbers[i];
    }
    int max = 0;
   for(int i=0;i<size;i++){
       if(numbers[i]>max){
           max=numbers[i];
       }
   }std::cout << "The biggest number in the array is "<< max << std::endl;
   std::cout << "The memory adress of the maximum is "<<&max << std::endl;
    return 0;
}