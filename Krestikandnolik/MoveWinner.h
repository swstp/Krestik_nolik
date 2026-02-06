#pragma once

#include <iostream>
#include <conio.h>

//using namespace std;
using std::cout;
using std::cin;
using std::endl;

const int size1 = 3;

void moveX(char gamearea[][size1], char& X, int& x1, int& x2, int& x3, int& x4, int& x5, int& x6, int& x7, int& x8);

void moveY(char gamearea[][size1], char& Y, int& y1, int& y2, int& y3, int& y4, int& y5, int& y6, int& y7, int& y8);

bool checkwinner(char amearea[][size1], int x1, int x2, int x3, int x4, int x5, int x6, int x7, int x8, int y1, int y2, int y3, int y4, int y5, int y6, int y7, int y8);