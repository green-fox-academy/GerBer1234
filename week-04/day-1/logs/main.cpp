#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void dataIn();
// Read all data from 'log.txt'.
// Each line represents a log message from a web server
// Write a function that returns an array with the unique IP adresses.
// Write a function that returns the GET / POST request ratio.

int main() {
    dataIn();
    return 0;
}

void dataIn() {
    std::ifstream files("log.txt");
    std::string lines, dayName, month, type, time, ip, per;
    int day, year;
    std::ofstream file("ip.txt");
    std::vector<std::string> IP;
    if (files.is_open() && file.is_open()) {
        while (files >> dayName >> month >> day >> time >> year >> ip >> type >> per) {
            file << ip << std::endl;
        }
    } else {
        std::cout << "Can't open the file...";
    }
    std::string ips[] = {};std::cout << ips[10];
}