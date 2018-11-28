#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
//Version 1
/*std::vector<std::string> quoteSwap(std::vector<std::string> quote);

int main(int argc, char* args[])
{
    std::vector<std::string> quote = {"What", "I", "do", "create,", "I", "cannot", "not", "understand."};
    for(const auto& great : quoteSwap(quote))
    {
        std::cout << great << " ";
    }
    return 0;
}
std::vector<std::string> quoteSwap(std::vector<std::string> quote){
    std::string temp;
    temp = quote[2];
    quote[2]=quote[5];
    quote[5]=temp;
    return quote;
}*/
//Version 2
std::vector<std::string> quoteSwap(std::vector<std::string> &quote, const std::string &first, const std::string &second){
    auto itFirst = std::find(quote.begin(), quote.end(), first);
    auto itSecond = std::find(quote.begin(), quote.end(), second);
    *itFirst = second;
    *itSecond = first;
    return quote;
}

int main() {
    std::vector<std::string> quote = {"What", "I", "do", "create,", "I", "cannot", "not", "understand."};
    for (const auto &sweet : quoteSwap(quote, "cannot", "do")){
        std::cout << sweet << " ";
    }
    return 0;
}