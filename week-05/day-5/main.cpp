#include <iostream>
#include <fstream>

int counter(std::ifstream file);

int main(int argc, char *args[]) {
    std::ifstream file ("a.txt");
    std::string line;
    if (argc == 1) {
        std::cout << "Command Line Todo application" << std::endl;
        std::cout << "=============================" << std::endl;
        std::cout << std::endl;
        std::cout << "Command line arguments:" << std::endl;
        std::cout << "-l   Lists all the tasks" << std::endl;
        std::cout << "-a   Adds a new task" << std::endl;
        std::cout << "-r   Removes a task" << std::endl;
        std::cout << "-c   Completes a task" << std::endl;
    }else if (argc == 2){
        std::string command = std::string(args[1]);
        if(command == "-l") {
            if (file.is_open() && file.peek()!= std::ifstream::traits_type::eof())
                {while (getline(file, line)) {
                        std::cout << line << std::endl;
                    }file.close();
                } else
                    std::cout << "No todos for today! :)" << std::endl;
        }else if(command == "-a"){
            std::ofstream filex ("a.txt",std::ios_base::app | std::ios_base::out);
            if (filex.is_open()){
                filex << counter() << " - Feed the monkey" << std::endl;
        }
        }}

    return 0;
}
int counter(std::ifstream file){
    std::string line;
    int count=0;
    while(getline(file,line)){
        count++;
    };
    return count;
}