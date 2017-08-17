//Game Stats
//Declaraing and Initializing Variables

#include <iostream>
using namespace std;

int main() {
	//mixture of ways to initialize and declare variables
	int score = 0;
	double distance = 1200.76;
	char playAgain = 'y';
	bool shieldsUp = true;
	short lives, aliensKilled;
	//cout << "What happens if you print lives when it's not initialized: " << lives << endl; -- you get a compile error
	lives = 3;
	aliensKilled = 10;
	double engineTemp = 3572.89;

	cout << "\nscore: " << score << endl;
	cout << "distance: " << distance << endl;
	cout << "playAgain: " << playAgain << endl;
	//skipping shieldsUp since you don't generally print Boolean values (okay why..?)
	cout << "lives: " << lives << endl;
	cout << "aliensKilled: " << aliensKilled << endl;
	cout << "engineTemp: " << engineTemp << endl;

	int fuel;
	cout << "How much fuel?  ";
	cin >> fuel;
	cout << "fuel: " << fuel << endl;

	//signed means it can be negative or positive numbers
	//unsigned means only positive
	//short may decrease the storage space required

	//this is defining a new name for an existing type
	typedef unsigned short int ushort;
	//using our new name for unsigned short int 
	ushort bonus = 10;
	cout << "\nbonus: " << bonus << endl;

	return 0;
}