// This program calculates the letter grade for an exam or quiz.

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Inheritance: first, need a parent class

class GradedActivity {
private:
	int score;
	char letterGrade;
public:
	GradedActivity() {};
	// functions
	void getScore(int s) {
		score = s;
	}
	char getLetterGrade() {
		if (score >= 90)
			letterGrade = 'A';
		else if (score >= 80 && score < 90)
			letterGrade = 'B';
		else if (score >= 70 && score < 80)
			letterGrade = 'C';
		else if (score >= 65 && score < 70)
			letterGrade = 'D';
		else
			letterGrade = 'F';
		return letterGrade;
	}
};

// Derived class (child class)
// 1st: Final Exam
// 2nd: Quiz

class FinalExam : public GradedActivity {
private:
	int numQuestions;
	int pointsPerQuestion;
	int numMissed;
public:
	FinalExam() {};
	void setExam(int questions, int missed) {
		numQuestions = questions;
		numMissed = missed;
	}
	void getPointsEach(int points) {
		pointsPerQuestion = points;
	}
	int totalScore() {
		float totalScore_exam = (numQuestions * pointsPerQuestion) - (numMissed * pointsPerQuestion);
		float percent = (totalScore_exam / (numQuestions * pointsPerQuestion)) * 100;
		return percent;
	}
};

class Quiz : public GradedActivity {
private:
	int numQuestions;
	int pointsEach;
	int numMissed;
	int bonusQuestions;
	int bonusPointsEach;
public:
	Quiz() {};
	void setQuiz(int questions, int missed, int bonus) {
		numQuestions = questions;
		numMissed = missed;
		bonusQuestions = bonus;
	}
	void getQuizPoints(int points, int bonusPoints) {
		pointsEach = points;
		bonusPointsEach = bonusPoints;
	}
	int totalQuizScore() {
		float totalScoreQuiz = (numQuestions * pointsEach) - (numMissed * pointsEach) + (bonusPointsEach * bonusQuestions);
		float percent = (totalScoreQuiz / (numQuestions * pointsEach)) * 100;
		return percent;
	}
};


int main() {
	FinalExam fe;
	Quiz qz;
	
	int questions = 0, missed = 0, points = 0, bonus = 0, bonusPoints = 0;
	int scoreExam = 0, scoreQuiz = 0;
	int choice = -1;

	cout << "Main Menu\n";
	do {
		cout << "\nEnter 1 for final exam.\nEnter 2 for quiz.\nEnter 3 to exit.\n\nPlease select an option: ";
		cin >> choice;
		while (choice != 1 && choice != 2 && choice != 3) {
			cout << "\nPlease enter a valid input: ";
			cin >> choice;
		}
		switch (choice) {
		case 1:
			cout << "\nEnter the number of questions: ";
			cin >> questions;
			cout << "Enter the number of missed answers: ";
			cin >> missed;
			fe.setExam(questions, missed);

			cout << "Enter points per question: ";
			cin >> points;
			fe.getPointsEach(points);

			scoreExam = fe.totalScore();
			fe.getScore(scoreExam);

			cout << endl << "Exam grade: " << scoreExam << endl;
			cout << "Letter grade: " << fe.getLetterGrade() << endl;
		case 2:

		}
	} while (choice != 3);
	return 0;
}