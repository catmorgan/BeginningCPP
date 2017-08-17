//Game Stats 2
//Demonstrates arithmetic operations with variables

#include <iostream>
using namespace std;

int main() {
	typedef unsigned int uint;
	uint score = 5000;
	cout << "score: " << score << endl;

	score = score + 100;
	cout << "score: " << score << endl;

	score += 100;
	cout << "score: " << score << endl;

	int lives = 3;
	++lives;
	cout << "lives: " << lives << endl;

	lives = 3;
	lives++;
	cout << "lives: " << lives << endl;

	lives = 3;
	int bonus = ++lives * 10;
	cout << "lives, bonus: " << lives << ", " << bonus << endl;

	lives = 3;
	//++ is execusted after the larger expression, lives * 10
	bonus = lives++ * 10;
	cout << "lives, bonus: " << lives << ", " << bonus << endl;

	//integar wrap around
	score = 4294967295;
	cout << "\nscore: " << score << endl;
	++score;
	cout << "score: " << score << endl;

	return 0;
}