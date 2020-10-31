#include <iostream>
#include <array>
#include <vector>
using namespace std;


//void print_vector(vector<int>*input) {
//	for (int i = 0; i < input->size(); i++) {
//		cout << input->at(i) << endl;
//	}
//}

void print_vector(vector<int>& input) {
	for (int i = 0; i < input.size(); i++) {
		cout << input[i] << endl;
	}
}


int main() {

	int size;
	cout << "Size of array:" << endl;
	cin >> size;
	vector<int>numbers;

	for (int i = 0; i < size; i++) {
		numbers.push_back(i);
	}

	print_vector(numbers);
	
	return 0;
}