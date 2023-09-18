#include <iostream>
using namespace std;

class Car {
private:
	string model = "generic";
	int maxSpeed = -999;
public:
	Car();
	void getName(string name);
	void getSpeed(int maxSpeed);
	void Print();
};