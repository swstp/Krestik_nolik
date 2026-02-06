#include "MoveWinner.h"

void moveX(char gamearea[][size1], char& X, int& x1, int& x2, int& x3, int& x4, int& x5, int& x6, int& x7, int& x8) {
wrong_choice:
	switch (X) { // Checking what player has chose.
	case '1':
		if (gamearea[0][0] == 'Y' || gamearea[0][0] == 'X') {
			cout << "it's already taken ! Choose another one: "; cin >> X;
			goto wrong_choice;
		}
		gamearea[0][0] = 'X';
		x1++; x4++; x7++;
		break;
	case '2':
		if (gamearea[0][1] == 'Y' || gamearea[0][1] == 'X') {
			cout << "it's already taken ! Choose another one: "; cin >> X;
			goto wrong_choice;
		}
		gamearea[0][1] = 'X';
		x1++; x5++;
		break;
	case '3':
		if (gamearea[0][2] == 'Y' || gamearea[0][2] == 'X') {
			cout << "it's already taken ! Choose another one: "; cin >> X;
			goto wrong_choice;
		}
		gamearea[0][2] = 'X';
		x1++; x6++; x8++;
		break;
	case '4':
		if (gamearea[1][0] == 'Y' || gamearea[1][0] == 'X') {
			cout << "it's already taken ! Choose another one: "; cin >> X;
			goto wrong_choice;
		}
		gamearea[1][0] = 'X';
		x2++; x4++;
		break;
	case '5':
		if (gamearea[1][1] == 'Y' || gamearea[1][1] == 'X') {
			cout << "it's already taken ! Choose another one: "; cin >> X;
			goto wrong_choice;
		}
		gamearea[1][1] = 'X';
		x2++; x5++; x7++; x8++;
		break;
	case '6':
		if (gamearea[1][2] == 'Y' || gamearea[1][2] == 'X') {
			cout << "it's already taken ! Choose another one: "; cin >> X;
			goto wrong_choice;
		}
		gamearea[1][2] = 'X';
		x2++; x6++;
		break;
	case '7':
		if (gamearea[2][0] == 'Y' || gamearea[2][0] == 'X') {
			cout << "it's already taken ! Choose another one: "; cin >> X;
			goto wrong_choice;
		}
		gamearea[2][0] = 'X';
		x3++; x4++; x8++;
		break;
	case '8':
		if (gamearea[2][1] == 'Y' || gamearea[2][1] == 'X') {
			cout << "it's already taken ! Choose another one: "; cin >> X;
			goto wrong_choice;
		}
		gamearea[2][1] = 'X';
		x3++; x5++;
		break;
	case '9':
		if (gamearea[2][2] == 'Y' || gamearea[2][2] == 'X') {
			cout << "it's already taken ! Choose another one: "; cin >> X;
			goto wrong_choice;
		}
		gamearea[2][2] = 'X';
		x3++; x6++; x7++;
		break;
	default:
		break;
	}
}