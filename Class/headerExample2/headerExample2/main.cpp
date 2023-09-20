#include "Header.h"
#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>
#include <list>

using namespace std;

int main() {
	Registration student1;
	//student1.getNames("billy", "the kid");
	//student1.getidNumber(223);
	//student1.print();

	string firstname;
	string lastname;
	int randID = 0;
	string moreStudents = "y";

	//lists
	list<string> fullname;
	list<string>::iterator name_iter;
	string name;

	while (moreStudents == "y") {
		cout << "Enter student's first name: ";
		getline(cin, firstname);

		cout << "Enter student's last name : ";
		getline(cin, lastname);
		cout << endl;

		srand(time(nullptr));
		randID = rand() % 1000 + 100;

		student1.getNames(firstname, lastname);
		student1.getidNumber(randID);
		student1.print();

		fullname.push_back(lastname);

		cout << endl << "Would you like to add another student? (y/n): ";
		getline(cin, moreStudents);
		cout << endl;
	}
	return 0;
}