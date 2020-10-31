#include <iostream>
#include <array>

using namespace std;


int main() {

	array<int, 4> numbers;

	for (int i = 0; i < 4; i++) {
		numbers[i] = i;
	}

	int* ptr_numbers = &numbers[0];

	for (int i = 0; i < 4; i++) {
	
		cout << *ptr_numbers << endl;
			++ptr_numbers;
	}

	
	return 0;
}