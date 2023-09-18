#include "Header.h"
using namespace std;

Car::Car(){}

void Car::getName(string carModel) {
	model = carModel;
}

void Car::getSpeed(int speed) {
	maxSpeed = speed;
}

void Car::Print() {
	cout << "Car model: " << model << endl << "Max Speed: " << maxSpeed << endl;
}

int main() {
	Car car1;
	car1.getName("Nissan");
	car1.getSpeed(300);
	car1.Print();
	cout << endl;

	Car car2;
	car2.Print();
	cout << endl;

	Car car3;
	car3.getName("Toyota");
	car3.Print();
	cout << endl;

	Car car4;
	car4.getSpeed(200);
	car4.Print();
	cout << endl;
}