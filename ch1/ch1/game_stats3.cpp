//Game Stats 3.0
//Demonstrate Constants 

#include <iostream>
using namespace std;

int main() {
	const int ALIEN_POINTS = 150;
	int aliensKilled = 10;
	int score = aliensKilled * ALIEN_POINTS;
	cout << "score: " << score << endl;

	enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
	difficulty myDifficulty = EASY;

	//enums = unsigned int constants

	//BOMBER_COST assigned to 26, since it's unassigned and one more than 25
	enum shipCost {FIGHTER_COST = 25, BOMBER_COST,CRUISER_COST = 50};
	shipCost myShipCost = BOMBER_COST;

	cout << "\nTo upgrade my ship to a Cruiser will cost " << (CRUISER_COST - myShipCost) << " Resource Points.\n";

	return 0;
}