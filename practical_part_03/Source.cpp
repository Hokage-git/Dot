#include <iostream>
#include "Header.h"

using namespace std;

void dot::input() {
	cout << "������� x";
	cin >> x;
	cout << "������� y";
	cin >> y;
	cout << "������� z";
	cin >> z;
}

void dot::output() {
	cout << "(" << x << ";" << y << ";" << z << ")";
}