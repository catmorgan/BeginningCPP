//Guess my Number, where computer guesses player's number

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	srand(static_cast<unsigned int>(time(0)));

	int tries = 0;
	int secretNumber;
	int highestNum = 100; //the highest the upper range can be 
	int lowestNum = 0;
	int guess;

	cout << "\tWelcome to Guess My Number\n\n";
	cout << "Enter a number between 1 and 100 for the computer to guess: ";
	cin >> secretNumber;

	do {
		guess = lowestNum + rand() % (highestNum - lowestNum) + 1;
		++tries;
		if (guess > secretNumber) {
			cout << "The computer guessed " << guess << ". Too high! \n\n";
			highestNum = guess - 1; //subtract one because we do not want to include this number in the range since we know it's too high
		}
		else if (guess < secretNumber) {
			cout << "The computer guessed " << guess << ". Too low!\n\n";
			lowestNum = guess + 1; //add one because we do not want to include this number in the range since we know it's too low
		}
		else {
			cout << "\nThat's it! You got it in " << tries << " guesses!\n";
		}

	} while (guess != secretNumber);

	return 0;
}

