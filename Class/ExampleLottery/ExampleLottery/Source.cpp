#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>

using namespace std;

class LotteryNum {
private:
	static const int SIZE = 6;
	int nums[SIZE];
public:
	//constructor
	LotteryNum() {
		srand(time(nullptr));
		gen_new_number();
	}
	//generates a new number and find the mod when divided by 100
	void gen_new_number() {
		for (int i = 0; i < SIZE; i++) {
			nums[i] = rand() % 100;
		}
	}
	//outputs all of the numbers
	void output_number() {
		cout << "   ";
		for (int i = 0; i < SIZE; i++) {
			cout << setfill('0') << setw(2) << nums[i] << "   ";
		}
		cout << endl;
	}
};

int main() {
	//creates a variable lotnumbers of the class LotteryNum
	LotteryNum lotnumbers;
	string moreNumbers = "y";
	//char moreNumbers = 'y';
	string firstName;
	string lastName;

	cout << "Lottery Number Generator" << endl;
	cout << "------------------------" << endl;

	while (moreNumbers == "y") {
		cout << "Enter first name: ";
		getline(cin, firstName);
		cout << "Enter last name: ";
		getline(cin, lastName);
		cout << "Lottery numbers for " << firstName << " " << lastName << ": ";
		lotnumbers.gen_new_number();
		lotnumbers.output_number();
		cout << "Generate more numbers? (y/n): ";
		getline(cin, moreNumbers);
		cout << endl;
	}
}