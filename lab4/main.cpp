#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>

using namespace std;



int main() {

	map<string, int>dictionary;

	ifstream input;
	input.open("lorem.txt");

	string line;

	if (input.is_open()) {

		string word;

		while (getline(input, line)) {

			if (dictionary.find(word) == dictionary.end()) {
				dictionary.insert({ word,1 });
			}
			else {
				dictionary[word]++;
			}
		}
	}
	string tmp;
	cout << "choose a word" << endl;
	cin >> tmp;

	cout << "the word " << tmp << " appears " << dictionary[tmp] << " times " << endl;

	return 0;
}