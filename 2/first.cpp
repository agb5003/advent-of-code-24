#include <iostream>
#include <fstream>
#include <vector>
#include <string>

std::vector<std::vector<int>> parseFile(std::ifstream& inf) {
    std::vector<std::vector<int>> data;
    std::string inputLine;
    while (std::getline(inf, inputLine)) {
        int prevNum;
        if (prevNum == 0) {
            std::cout << "prevNum is 0" << std::endl;
        } else {
            std::cout << "prevNum is not 0" << std::endl;
        }
    }

    return data;
}

int main() {
    // Open and parse input file for data
    std::vector<std::vector<int>> data;
    std::ifstream inf{ "input" };
    if (!inf) {
        std::cout << "Could not open input file. Make sure input exists and try again." << std::endl;
    } else {
        std::cout << "Input file found." << std::endl;
    }
    data = parseFile(inf);
    inf.close();




    
    


    
    return 0;
}
