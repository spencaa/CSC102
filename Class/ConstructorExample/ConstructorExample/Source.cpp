#include <iostream>
using namespace std;

/*
// create class
class Restaurant {
	// define private and public stuff
private:
	string name;
	int rating;
public:
	// constructor, not initialized (no default perameters)
	Restaurant() {}
	// functions inside the class
	// get the name of the restaurant
	void setName(string restaurantName) {
		name = restaurantName;
	}
	// get the rating of the restaurant
	void setRating(int userRating) {
		rating = userRating;
	}
	// print to the console
	void print() {
		cout << "Restaurant name: " << name << " -- " << rating << endl;
	}
};

int main() {
	// call constructor/create instance
	Restaurant favLunchPlace;
	// favLunchPlace will give access to functions in the Restaurant class
	favLunchPlace.setName("Outback");
	favLunchPlace.setRating(6);
	favLunchPlace.print();
	return 0;
}
*/

// constructor with "default" parameters
class Car {
private:
	string model;
	int maxSpeed;
public:
	Car(string car_model = "Generic", int car_maxSpeed = -1) {
		model = car_model;
		maxSpeed = car_maxSpeed;
	}
	void print() {
		cout << "Car model: " << model << " -- Max Speed: " << maxSpeed << endl;
	}
};

int main() {
	// call constructor
	Car car1("Mazda", 116);
	Car car2;
	car1.print();
	car2.print();
	return 0;
}