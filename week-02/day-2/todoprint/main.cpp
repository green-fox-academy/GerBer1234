#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string todoText = " - Buy milk\n";
    std::string begin = "My todo:\n";
    int start_pos = todoText.find(todoText);
    todoText.insert(static_cast<unsigned int>(start_pos), begin);
    todoText.append(" - Download games\n\t- Diablo");
    std::cout << todoText << std::endl;

    return 0;
}