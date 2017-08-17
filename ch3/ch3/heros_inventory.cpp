//Heroes Inventory
//Demonstrates Arrays

#include<iostream>
#include <string>
using namespace std;

int main() {
	const int MAX_ITEMS = 10;
	string inventory[MAX_ITEMS];

	int numItems = 0;
	// string inventory [MAX_ITEMS] = {"sword", "armor", "shield"};
	inventory[numItems++] = "sword";
	inventory[numItems++] = "armor";
	inventory[numItems++] = "shield";

	cout << "\nYour items:\n";
	for (int i = 0; i < numItems; ++i) {
		cout << inventory[i] << endl;
	}

	cout << "\nYou trade your sword for a battle axe.";
	inventory[0] = "battle axe";
	cout << "\nYour items:\n";
	for (int i = 0; i < numItems; ++i) {
		cout << inventory[i] << endl;
	}

	cout << "\nThe item name '" << inventory[0] << "' has ";
	cout << inventory[0].size() << " letters in it.\n";

	cout << "\nYou find a healing potion.";
	if (numItems < MAX_ITEMS) {
		inventory[numItems++] = "healing potion";
	}
	else {
		cout << "You have too many items and can't carry another.";
	}

	cout << "\nYour items:\n";
	for (int i = 0; i < numItems; ++i) {
		cout << inventory[i] << endl;
	}

	//strings can also be declared as an array of chars terminated by null character aka "C-Style" strings
	char phrase[] = "Game Over!";
	char phase[81] = "Game Over!";
	//works with the string library
	string word1 = "Game";
	char word2[] = "Over";
	string phrase2 = word1 + word2;
	//char phrase3[] = word1 + word2 throws an error because a string + char[] is a string

	return 0;
}