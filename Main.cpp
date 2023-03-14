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
		itos[count] = i;
		count++;
	}
	return itos;
}

std::vector<int> encoder(std::unordered_map<char, int> stoi, std::vector<char> &text) {
	std::vector<int> encoded_chars;
	for (int i = 0; i < text.size(); i++) {
		text[i] = stoi[text[i]];
	}
	return encoded_chars;
}
std::vector<char> decoder(std::unordered_map<char, int> itos, std::vector<int> &encoded_text) {
	std::vector<char> decoded_chars(encoded_text.size()); //initialize the size of the vector.
	for (int i = 0; i < encoded_text.size(); i++) {
		decoded_chars.push_back(itos[encoded_text[i]]);
	}
	return decoded_chars;
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
	std::cout << text.size();
	/*
	* --------------------------------------------------------------- *
	  Mapping char to int AND Calling the encoding and decoding func.
	* --------------------------------------------------------------- *
	*/
	std::unordered_map<char, int> stoi = vec_2_stoi(sorted_text);
	std::unordered_map<int, char> itos = vec_2_itos(sorted_text);

	std::vector<int> encoded_text = encoder(stoi, text);

	/*
	* -------------------------- *
	  Train & Test Dataset Split
	* -------------------------- *
	*/





	/*
	* -------------------------- *
	  Tensor creation of dataset
	* -------------------------- *
	*/





	/*
	* ------------- *
	  Loss Function
	* ------------- *
	*/






	/*
	* --------------------------- *
	  Neural Network Architecture
	* --------------------------- *
	*/

	return 0;
}