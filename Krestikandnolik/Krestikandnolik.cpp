#include "MoveWinner.h"

//class xy {
//private:
//	char X, Y;
//
//public:
//	xy() {
//
//	}
//};
static char getkey() {
	char key{};
	if (_kbhit != 0) {
		key = _getch();
	}
	return key;
}
void displayMove(char field[size1][size1]) {
	for (int i = 0; i < size1; i++) {
		cout << "| ";
		for (int j = 0; j < size1; j++) {
			cout << field[i][j] << " | ";
		}
		cout << endl << "-------------" << endl;
	}
}

int main() {
	do {
		bool run = true;
		int x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0, x6 = 0, x7 = 0, x8 = 0;
		int y1 = 0, y2 = 0, y3 = 0, y4 = 0, y5 = 0, y6 = 0, y7 = 0, y8 = 0;
		int i = 1;
		char X = 0, Y = 0;// PLayer Y and X. Num of move
		char gamearea[size1][size1]{ {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
		while (run) {
			if (i % 2 != 0) {
				// Outputs move and choosing a free place for <X>
				displayMove(gamearea);
				// Choosing free place for <X>
				cout << "You're X. Choose free place:\n";
				X = getkey();
				moveX(gamearea, X, x1, x2, x3, x4, x5, x6, x7, x8);
			}
			else {
				// Outputs move and choosing a free place for <Y>
				displayMove(gamearea);
				//Choosing free place for <Y>
				cout << "You're Y. Choose free place:\n";
				Y = getkey();
				moveY(gamearea, Y, y1, y2, y3, y4, y5, y6, y7, y8);
			}
			//if (i >= 5) {
				run = checkwinner(gamearea, x1, x2, x3, x4, x5, x6, x7, x8, y1, y2, y3, y4, y5, y6, y7, y8);
			
			cout << "--------------------------------\n";
			i++;
			if (i > 9) {
				break;
			}
		}
		cout << "Wanna play again ? Y/n\n";
	} while (getkey() == 'y');
	return 0;
}