#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::ifstream inputFileStream;
    inputFileStream.open("input");

    std::ofstream outputFileStream;
    outputFileStream.open("sorted");

    std::ofstream differenceFileStream;
    differenceFileStream.open("difference");

    std::string inputLine;
    
    std::vector<int> list1;
    std::vector<int> list2;
    // Parse input file for numbers
    bool parseSwitcher = true; // Use a bool to track whether to input number to list1 or list2
    while (inputFileStream >> inputLine) { // Because this returns false when the file ends
        // CAREFUL: The second index in substr is the stop index, which is NOT included.
        std::string numstring = inputLine.substr(0,5); 
        int num = std::stoi(numstring);
        switch (parseSwitcher) {
            case true:
                list1.push_back(num);
                break;
            case false:
                list2.push_back(num);
                break;
        }
        parseSwitcher = !parseSwitcher; // Reverse polarity of parseSwitcher for next entry
    }
    inputFileStream.close();

    // Sort the lists
    std::sort(list1.begin(), list1.end());
    std::sort(list2.begin(), list2.end());

    // Print sorted lists (for debugging)
    for (int i = 0; i < list1.size(); i ++) {
        outputFileStream << list1[i] << "   " << list2[i] << std::endl;
    }
    outputFileStream.close();
    
    // Get the linewise differences and add them up
    int differenceSum = 0;
    for (int i = 0; i < list1.size(); i++) {
        int difference = std::abs(list1[i] - list2[i]);
        differenceFileStream << difference << std::endl;
        differenceSum += difference;
    }

    std::cout << std::to_string(differenceSum) << std::endl;
}
