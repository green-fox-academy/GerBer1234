#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

std::vector<std::string> quoteSwap(std::vector<std::string> quote);

int main(int argc, char* args[])
{
    std::vector<std::string> quote = {"What", "I", "do", "create,", "I", "cannot", "not", "understand."};

    // Accidentally I messed up this quote from Richard Feynman.
    // I do not understand things which I cannot create.
    // Two words are out of place
    // Your task is to fix it by swapping the right words with code
    // Create a method called quoteSwap().

    // Also, print the sentence to the output with spaces in between.
    for(const auto& great : swap(quote))
    {
        std::cout << great << " ";
    }
    return 0;
}
std::vector<std::string> quoteSwap(std::vector<std::string> quote){
    std::vector<std::string> original = {"I","do","not","understand","things","which","I","cannot","create."};
    
    return quote;
}