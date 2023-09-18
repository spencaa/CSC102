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
	cout << "\n";
}