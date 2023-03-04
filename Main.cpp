#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

int main() {
	
	std::ifstream myFile;
	std::vector<char> text;
	std::vector<char>::iterator ip;
	char c = NULL;
	myFile.open("C:\\Users\\shakespeare.txt");
	if (!myFile) exit(1);
	while (myFile.get(c)) {
		text.push_back(c);
	}
	//sort the vector in terms of character order:
	std::vector<char> sorted_text = text;
	std::sort(sorted_text.begin(), sorted_text.end());
	//iterator
	ip = std::unique(sorted_text.begin(), sorted_text.end());
	sorted_text.resize(std::distance(sorted_text.begin(), ip));
	std::cout << text.size();
	//for (ip = text.begin(); ip != text.end(); ip++) {
		//std::cout << *ip << " ";
	//}
	//for (int i = 0; i < 1000; i++) {
		//std::cout << text[i];
	//}
	
	return 0;
}