#include "Header.h"
#include <list>

using namespace std;

// build functions
// overloaded constructor
Registration::Registration() {
	firstName = "First name not available";
	lastName = "Last name not available";
	idNumber = -1;
}

void Registration::getNames(string firstname, string lastname) {
	firstName = firstname;
	lastName = lastname;
}

void Registration::getidNumber(int idnumber) {
	idNumber = idnumber;
}

void Registration::print() {
	cout << "Name:      " << firstName << " " << lastName << endl;
	cout << "ID Number: " << idNumber << endl;
}