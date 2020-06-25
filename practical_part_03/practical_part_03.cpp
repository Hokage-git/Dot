#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	dot tochka;

	tochka.input();
	tochka.output();
	tochka.in_file();

	dot tochka_2 = { 3,4,5 };
	tochka_2.output();
	tochka_2.in_file();
}
