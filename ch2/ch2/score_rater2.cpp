//Score Rater 2.0
//if and else

#include <iostream>
using namespace std;

int main() {
	int score; 
	cout << "Enter your score: ";
	cin >> score;

	if (score >= 1000) {
		cout << "You scored 1000 or more. Impressive! \n\n";
	}
	else if (score >= 500) {
		cout << "You scored 500 or more.\n";
	}
	else if (score >= 250) {
		cout << "You scored 250 or more. \n";
	}
	else {
		cout << "You scored less than 250, lame.\n";
	}
	
	return	0;
}