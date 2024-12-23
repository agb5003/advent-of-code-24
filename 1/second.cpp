#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_map>
#include <string>

std::ifstream sortedfs{ "sorted" };

std::vector<int> list1;

int main() {
	// Parse data in sortedfs
	std::string inputLine;
	bool parseSwitcher = true;
	// Make a hash map of the numbers in list 2
	std::unordered_map<int, int> occurences;
	while (sortedfs >> inputLine) {
		int num = std::stoi(inputLine);
		if (parseSwitcher) {
			list1.push_back(num);
		} else {
			occurences[num]++;
		}
		parseSwitcher = !parseSwitcher;
	}

	// Count similarity score based on occurence data
	int similarityScore = 0;
	for (int num1 : list1) {
		similarityScore += num1 * occurences[num1];
	}
	std::cout << similarityScore << std::endl;
	return 0;
}
