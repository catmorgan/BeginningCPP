//Finicky Counter
//breaks and continues in while loop

#include <iostream>
using namespace std;

int main() {
	int count = 0;
	while (true) {
		count += 1;
		
		//end loop if count is greather than 10
		if (count > 10) {
			break;
		}

		//skip 5
		if (count == 5) {
			continue;
		}
		cout << count << endl;
	}

	return 0;
}