#include <iostream>
#include <string>

int main(int argc, char *args[]) {
    std::string url("https//www.reddit.com/r/nevertellmethebots");
    std::string from = "bots";
    std::string slash = "//";
    int start_pos = url.find(from);
    int start_pos2 = url.find(slash);
    if (start_pos == std::string::npos) {
        std::cout << "Not found...";
    } else {
        url.replace(static_cast<unsigned int>(start_pos), from.length(), "odds");
    }
    url.insert(static_cast<unsigned int>(start_pos2), ":");
    std::cout << url << std::endl;
    return 0;
}