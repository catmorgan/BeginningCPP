//Menu Chooser
//Switch statement 

#include <iostream>
using namespace std;

int main() {
	cout << "Difficult Levels: \n\n";
	cout << "1 - Easy\n";
	cout << "2 - Normal\n";
	cout << "3 - Hard\n";

	int choice;
	cout << "Choose one: ";
	cin >> choice;

	switch (choice) {
		case 1: 
			cout << "You picked Easy.\n";
			break;
		case 2: 
			cout << "You picked Normal.\n";
			break;
		case 3: 
			cout << "You picked Hard.\n";
			break;
		default:
			cout << "You made an illegal choice.\n";
	}

	return 0;
}