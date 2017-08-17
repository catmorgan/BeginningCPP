//String Tester
//Demonstrates string objects

#include <iostream>
#include <string>
using namespace std;

int main() {
	string word1 = "Game";
	string word2("Over");
	//creates a string 3 long with given character
	string word3(3, '!');
	string phrase = word1 + " " + word2 + word3;

	cout << "The phrase is: " << phrase << "\n\n";
	cout << "The phrase has " << phrase.size() << " characters in it. \n\n";
	cout << "The character at position 0 is: " << phrase[0] << "\n\n";
	cout << "Changing the character at position 0; \n";

	phrase[0] = 'L';
	cout << "The phrase is now: " << phrase << "\n\n";

	for (unsigned int i = 0; i < phrase.size(); i++) {
		cout << "Character at position " << i << " is: " << phrase[i] << endl;
	}
	
	cout << "\n The sequence 'Over' beings at location ";
	cout << phrase.find("Over") << endl;

	//find() returns a special constant defined in the string library when phrase isn't found
	//npos represents the largest possible size of a string, so it is greater than any possible
	//valid position number in a string object
	//aka a position number that can't exist
	if (phrase.find("eggplant") == string::npos) {
		cout << "'eggplant' is not in the phrase.\n\n";
	}

	//deletes 5 characters starting at and including position 4
	phrase.erase(4, 5);
	cout << "The phrase is now: " << phrase << endl;

	//deletes all characters after and including position 4
	phrase.erase(4);
	cout << "The phrase is now: " << phrase << endl;

	//clears the whole string
	phrase.erase();
	cout << "The phrase is now: " << phrase << endl;

	if (phrase.empty()) {
		cout << "\nThe phrase is no more.\n";
	}

	return 0;
}