#include <iostream>
#include "Header.h"

using namespace std;

void dot::input() {
	cout << "¬ведите x";
	cin >> x;
	cout << "¬ведите y";
	cin >> y;
	cout << "¬ведите z";
	cin >> z;
}

void dot::output() {
	cout << "(" << x << ";" << y << ";" << z << ")";
}