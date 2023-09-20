#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

class Registration {
private:
	string firstName;
	string lastName;
	int idNumber;
public:
	Registration();
	void getNames(string firstname, string lastname);
	void getidNumber(int idnumber);
	void print();
};