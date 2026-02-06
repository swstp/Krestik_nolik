#include "MoveWinner.h"

void moveY(char gamearea[][size1], char& Y, int& y1, int& y2, int& y3, int& y4, int& y5, int& y6, int& y7, int& y8) {
wrong_choice1:
	switch (Y) {
	case '1':
		if (gamearea[0][0] == 'Y' || gamearea[0][0] == 'X') {
			cout << "it's already taken ! Choose another one: "; cin >> Y;
			goto wrong_choice1;
		}
		gamearea[0][0] = 'Y';
		y1++; y4++; y7++;
		break;
	case '2':
		if (gamearea[0][1] == 'Y' || gamearea[0][1] == 'X') {
			cout << "it's already taken ! Choose another one: "; cin >> Y;
			goto wrong_choice1;
		}
		gamearea[0][1] = 'Y';
		y1++; y5++;
		break;
	case '3':
		if (gamearea[0][2] == 'Y' || gamearea[0][2] == 'X') {
			cout << "it's already taken ! Choose another one: "; cin >> Y;
			goto wrong_choice1;
		}
		gamearea[0][2] = 'Y';
		y1++; y6++; y8++;
		break;
	case '4':
		if (gamearea[1][0] == 'Y' || gamearea[1][0] == 'X') {
			cout << "it's already taken ! Choose another one: "; cin >> Y;
			goto wrong_choice1;
		}
		gamearea[1][0] = 'Y';
		y2++; y4++;
		break;
	case '5':
		if (gamearea[1][1] == 'Y' || gamearea[1][1] == 'X') {
			cout << "it's already taken ! Choose another one: "; cin >> Y;
			goto wrong_choice1;
		}
		gamearea[1][1] = 'Y';
		y2++; y5++; y7++; y8++;
		break;
	case '6':
		if (gamearea[1][2] == 'Y' || gamearea[1][2] == 'X') {
			cout << "it's already taken ! Choose another one: "; cin >> Y;
			goto wrong_choice1;
		}
		gamearea[1][2] = 'Y';
		y2++; y6++;
		break;
	case '7':
		if (gamearea[2][0] == 'Y' || gamearea[2][0] == 'X') {
			cout << "it's already taken ! Choose another one: "; cin >> Y;
			goto wrong_choice1;
		}
		gamearea[2][0] = 'Y';
		y3++; y4++; y8++;
		break;
	case '8':
		if (gamearea[2][1] == 'Y' || gamearea[2][1] == 'X') {
			cout << "it's already taken ! Choose another one: "; cin >> Y;
			goto wrong_choice1;
		}
		gamearea[2][1] = 'Y';
		y3++; y5++;
		break;
	case '9':
		if (gamearea[2][2] == 'Y' || gamearea[2][2] == 'X') {
			cout << "it's already taken ! Choose another one: "; cin >> Y;
			goto wrong_choice1;
		}
		gamearea[2][2] = 'Y';
		y3++; y6++; y7++;
		break;
	default:
		break;
	}
}