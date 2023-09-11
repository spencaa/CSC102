#include <iostream>
using namespace std;


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