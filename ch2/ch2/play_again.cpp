//Play Again
//while loops

#include <iostream>
using namespace std;

int main() {
	char yes = 'y';
	//char again = yes;
	//while (again == yes) {
	//	cout << "\n**Played an exciting game**";
	//	cout << "\nDo you want to play again? (y/n): ";
	//	cin >> again;
	//}
	char again;
	do {
		cout << "\n**Played an exciting game**";
		cout << "\nDo you want to play again? (y/n): ";
		cin >> again;
	} while (again == yes);

	cout << "\nOkay, bye.";

	return 0;
}