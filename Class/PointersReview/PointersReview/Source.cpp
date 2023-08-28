#include <iostream>

using namespace std;

int main() {
	int someInt;
	int* valPtr; // pointer

	someInt = 5;
	valPtr = &someInt; // assigns the memory address of someInt to valPtr. would throw an error if other variable was not called byref (&)

	cout << "someInt is " << &someInt << endl;
	cout << "valPtr  is " << valPtr << endl; // calls the value of valPtr, which is the memory address of someInt
	cout << "*valPtr is " << *valPtr << endl << endl; // displays what is stored in the &someInt/valPtr memory address

	*valPtr = 10; // assigns a value of 10 to the memory location of someInt

	cout << "*valPtr's new value is " << *valPtr << " at " << valPtr << endl;

	return 0;
}