//Ch1. Exercise 3
//Average of 3 game scores

#include <iostream>
using namespace std;

int main() {
	float scoreOne;
	float scoreTwo;
	float scoreThree;
	float average;

	cout << "Please enter three game scores: \n";
	cout << "First: ";
	cin >> scoreOne;
	cout << "Second: ";
	cin >> scoreTwo;
	cout << "Third: ";
	cin >> scoreThree;
	average = (scoreOne + scoreTwo + scoreThree) / 3;
	cout << "The average of " << scoreOne << ", " << scoreTwo << ", and " << scoreThree << " is " << average;

	return 0;
}