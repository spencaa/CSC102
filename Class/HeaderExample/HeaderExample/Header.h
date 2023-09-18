#include <iostream>
using namespace std;

class Car {
private:
	string model;
	int maxSpeed;
public:
	Car();
	void getName(string name);
	void getSpeed(int maxSpeed);
	void Print();
};