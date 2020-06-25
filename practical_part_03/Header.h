#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class dot {
private:
	double x;
	double y;
	double z;


public:
	void input();

	void output();

	double get_z() {
		return z;
	}

	double get_x() {
		return x;
	}

	double get_y() {
		return y;
	}

	dot() {
		x = 0;
		y = 0;
		z = 0;
	}
	dot(int a, int b, int c) {

		x = a;
		y = b;
		z = c;

	}
	~dot() {}

	void in_file() {
		ofstream fout;
		fout.open("Dot_Coords.txt");
		fout << "(" << x << "," << y << "," << z << ")" << endl;
		fout.close();
	}
}