#include <iostream>
#include <string>
using namespace std;

//create class

class Restaurant {
	//define private and public
private:
	string name;
	int rating;
	string comment;

public:
	//constructor
	//constructor not initialized (or no "default") parameters.

	Restaurant() {}

	//functions inside the class

	//get the name of the restaurant

	void setName(string restaurantName) {
		cout << "What is the name of the restaurant you are rating? ";
		getline(cin, restaurantName);
		name = restaurantName;

	}

	//get the rating of the restaurant

	void setRating(int userRating) {
		cout << "How would you rate this resturant? ";
		cin >> userRating;
		while (cin.fail()) {
			cin.clear();
			cin.ignore();
			cin >> userRating;
		}
		cin.ignore();
		rating = userRating;
	}

	void getComments(string userComment) {
		cout << "Please enter any comments about your experience: ";
		getline(cin, userComment);
		comment = userComment;
	}

	//print to the console

	void Print() {
		cout << endl << name << " -- " << rating << " -- " << comment << endl;
	}

};

int main() {

	//call constructor: create instance
	//(variable of "datatype" constructor)

	string addRating = "y";
	string comment;
	string restaurantName;
	int rating = 0;
	Restaurant favLunchPlace;

	while (addRating == "y") {
		favLunchPlace.setName(restaurantName);
		favLunchPlace.setRating(rating);
		favLunchPlace.getComments(comment);
		favLunchPlace.Print();
		cout << endl << "Would you like to enter another review? (y/n): ";
		getline(cin, addRating);
		cout << endl;
	}
	//favLunchPlace will give access to functions in class Restaurant


	return 0;

}