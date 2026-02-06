#include "MoveWinner.h"


bool checkwinner(char gamearea[][size1], int x1, int x2, int x3, int x4, int x5, int x6, int x7, int x8, int y1, int y2, int y3, int y4, int y5, int y6, int y7, int y8)
{
	if (y1 == 3 || x1 == 3) {
		if (y1 == 3) {
			cout << "\nY is won !\n";
		}
		else {
			cout << "\nX is won !\n";
		}
		for (int i = 0; i < size1; i++) {
			cout << "| ";
			for (int j = 0; j < size1; j++) {
				if (i == 0) {
					gamearea[i][j] = '-';
				}
				cout << gamearea[i][j] << " | ";
			}
			cout << endl << "-------------" << endl;
		}
		return false;
	}
	else if (y2 == 3 || x2 == 3) {
		if (y2 == 3) {
			cout << "\nY is won !\n";
		}
		else {
			cout << "\nX is won !\n";
		}
		for (int i = 0; i < size1; i++) {
			cout << "| ";
			for (int j = 0; j < size1; j++) {
				if (i == 1) {
					gamearea[i][j] = '-';
				}
				cout << gamearea[i][j] << " | ";
			}
			cout << endl << "-------------" << endl;
		}
		return false;
	}
	else if (y3 == 3 || x3 == 3) {
		if (y3 == 3) {
			cout << "\nY is won !\n";
		}
		else {
			cout << "\nX is won !\n";
		}
		for (int i = 0; i < size1; i++) {
			cout << "| ";
			for (int j = 0; j < size1; j++) {
				if (i == 2) {
					gamearea[i][j] = '-';
				}
				cout << gamearea[i][j] << " | ";
			}
			cout << endl << "-------------" << endl;
		}
		return false;
	}
	else if (y4 == 3 || x4 == 3) {
		if (y4 == 3) {
			cout << "\nY is won !\n";
		}
		else {
			cout << "\nX is won !\n";
		}
		for (int i = 0; i < size1; i++) {
			cout << "| ";
			for (int j = 0; j < size1; j++) {
				if (j == 0) {
					gamearea[i][j] = '|';
				}
				cout << gamearea[i][j] << " | ";
			}
			cout << endl << "-------------" << endl;
		}
		return false;
	}
	else if (y5 == 3 || x5 == 3) {
		if (y5 == 3) {
			cout << "\nY is won !\n";
		}
		else {
			cout << "\nX is won !\n";
		}
		for (int i = 0; i < size1; i++) {
			cout << "| ";
			for (int j = 0; j < size1; j++) {
				if (j == 1) {
					gamearea[i][j] = '|';
				}
				cout << gamearea[i][j] << " | ";
			}
			cout << endl << "-------------" << endl;
		}
		return false;
	}
	else if (y6 == 3 || x6 == 3) {
		if (y6 == 3) {
			cout << "\nY is won !\n";
		}
		else {
			cout << "\nX is won !\n";
		}
		for (int i = 0; i < size1; i++) {
			cout << "| ";
			for (int j = 0; j < size1; j++) {
				if (j == 2) {
					gamearea[i][j] = '|';
				}
				cout << gamearea[i][j] << " | ";
			}
			cout << endl << "-------------" << endl;
		}
		return false;
	}
	else if (y7 == 3 || x7 == 3) {
		if (y7 == 3) {
			cout << "\nY is won !\n";
		}
		else {
			cout << "\nX is won !\n";
		}
		for (int i = 0; i < size1; i++) {
			cout << "| ";
			for (int j = 0; j < size1; j++) {
				if (i == j) {
					gamearea[i][j] = ' \\\\\ ';
				}
				cout << gamearea[i][j] << " | ";
			}
			cout << endl << "-------------" << endl;
		}
		return false;
	}
	else if (y8 == 3 || x8 == 3) {
		if (y8 == 3) {
			cout << "\nY is won !\n";
		}
		else {
			cout << "\nX is won !\n";
		}
		for (int i = 0; i < size1; i++) {
			cout << "| ";
			for (int j = 0; j < size1; j++) {
				if (i == size1 - j - 1) {
					gamearea[i][j] = '/';
				}
				cout << gamearea[i][j] << " | ";
			}
			cout << endl << "-------------" << endl;
		}
		return false;
	}
	return true;
}