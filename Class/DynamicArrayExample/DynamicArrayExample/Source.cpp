#include <iostream>
using namespace std;

int main() {
	int* values; // create a pointer datatype variable
	int size;

	cout << "How many values will you enter?: ";
	cin >> size;

	values = new int[size]; // allocated in memory

	for (int i = 0; i < size; i++) {
		cout << "Value " << i + 1 << ": ";
		cin >> values[i];
	}
	
	delete[] values; // deallocated in memory
	return 1;
}