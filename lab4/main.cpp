#include <iostream>

using namespace std;


int main() {

	int variable = 8;
	int* ptr;

	cout << &variable << endl;

	ptr = &variable;

	cout << *ptr << endl;

	*ptr = 25;
	cout << variable << endl;

	variable = 15;
	cout << *ptr << endl;




	return 0;
}