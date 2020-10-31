#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>

using namespace std;



int main() {


   
    map<std::string, vector<int>> dictionary;

    ifstream input("lorem.txt");

    if (input.is_open()) {

        std::string word;

        int line_number = 0;

        while (getline(input, word)) {
            if (dictionary.find(word) == dictionary.end()) { 
                dictionary.insert({ word, {line_number} });
            }
            else {
                dictionary[word].push_back(line_number);
            }
            ++line_number;
        }
    }

   string tmp;

    cout << "Choose a word: " << endl;
    cin >> tmp;

    cout << "The word " << tmp << " appears in lines " <<endl;
    for (int i = 0; i < dictionary[tmp].size(); i++) {
        cout << dictionary[tmp][i] << endl;
    }

    return 0;
}