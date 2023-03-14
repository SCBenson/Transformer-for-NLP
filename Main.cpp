#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <unordered_map>

std::unordered_map<char,int> vec_2_stoi(std::vector<char> s) {
	std::unordered_map<char, int> stoi;
	int count = 0;
	for (auto i : s) {
		stoi[i] = count;
		count++;
	}
	return stoi;
}
std::unordered_map<int, char> vec_2_itos(std::vector<char> s) {
	std::unordered_map<int,char> itos;
	int count = 0;
	for (auto i : s) {
		itos[i] = count;
		count++;
	}
	return itos;
}

std::vector<int> encoder(std::unordered_map<char, int> stoi) {
	std::vector<int> encoded_chars;

	return encoded_chars;
}




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
	/*
	* ---------------------------------------
	  Sorting the vector for character order.
	* ---------------------------------------
	*/
	std::vector<char> sorted_text = text;
	std::sort(sorted_text.begin(), sorted_text.end());
	//iterator
	ip = std::unique(sorted_text.begin(), sorted_text.end());
	sorted_text.resize(std::distance(sorted_text.begin(), ip));
	for (auto i : sorted_text) {
		std::cout << i;
	}
	/*
	* ---------------------------------------
	  Calling the encoding and decoding func.
	* ---------------------------------------
	*/
	std::unordered_map<char, int> stoi = vec_2_stoi(sorted_text);
	std::unordered_map<int, char> itos = vec_2_itos(sorted_text);



	return 0;
}