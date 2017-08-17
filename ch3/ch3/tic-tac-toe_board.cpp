//Tic-Tac-Toe
//multidimensional arrays

#include<iostream>
using namespace std;

void printBoard(char board[][3]) {
	cout << "total size: " << sizeof(board) << endl;
	int rows = sizeof(board) / sizeof(board[0]);
	int columns = sizeof(board[0]);
	cout << "rows is: " << rows << " columns is: " << columns << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << board[i][j];
		}
		cout << endl;
	}
}

int main() {
	const int ROWS = 3;
	const int COLUMNS = 3;
	char board[ROWS][COLUMNS] = { {'O', 'X', 'O'}, { ' ', 'X', 'X' }, { 'X', 'O', 'O' }};

	cout << "Here's the tic-tac-toe board:\n"; 
	printBoard(board);

	cout << "\n 'X' moves to the empty location.\n\n";
	board[1][0] = 'X';

	cout << "Now the tic-tac-toe board is:\n";
	printBoard(board);

	return 0;
}