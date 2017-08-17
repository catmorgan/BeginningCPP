#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	srand(static_cast<unsigned int>(time(0))); //seed random number gen
	//the range is capped at 32767?

	int randomNumber = rand();

	int die = (randomNumber % 6) + 1; 
	cout << "You rolled a " << die << endl;

	return 0;
}