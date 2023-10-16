#include <iostream>

using namespace std;

int main() {
	int number;
	cout << "Enter a positive number: ";
	cin >> number;

	if (number < 0) {
		cout << "\nthat was not a positive number!\n";
		return 2;
	}
	else {
		int factorial = 1;
		for (int i = 1; i <= number; i++) {
			factorial = factorial * i;
		}
		cout << "\nThe factorial of " << number << ": " << factorial;
		return 0;
	}
}