//Designers Network
//logical operators

#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

string toLower(string str) {
	std::transform(str.begin(), str.end(), str.begin(), ::tolower);
	return str;
}

int main() {
	string username;
	string password;
	bool success;

	cout << "\tGame Designer's Network\n";

	do {
		cout << "\nUsername: ";
		cin >> username;
		username = toLower(username);

		cout << "Password: ";
		cin >> password;

		if (username == toLower("S.Meier") && password == "civilization") {
			cout << "\nHey, Sid.";
			success = true;
		}
		else if (username == toLower("S.Miyamoto") && password == "mariobros") {
			cout << "\nWhat's up, Shigeru?";
			success = true;
		}
		else if (username == toLower("W.Wright") && password == "thesims") {
			cout << "\nHow goes it, Will?";
			success = true;

		}
		else if (username == toLower("guest") && password == "guest") {
			cout << "\nWelcome, guest.";
			success = true;
		}
		else {
			cout << "\nYour login failed.";
			success = false;
		}
	} while (!success);

	return 0;
}