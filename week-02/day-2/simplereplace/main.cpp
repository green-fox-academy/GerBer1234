#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string example = "In a dishwasher far far away";
    std::string replace = "dishwasher";
    int start_pos = example.find(replace);
    if(start_pos==std::string::npos){
        std::cout << "No dishwasher..." << std::endl;
    }else{
    example.replace(static_cast<unsigned int>(start_pos), replace.length(), "galaxy");}
    std::cout << example << std::endl;
    return 0;
}