#include <iostream>
#include <cmath>
#include "header.h"
#include <cassert>

using namespace std;


double Hw1::res(double x1) {
	return x1 * x1 - 4;
}

double Hw1::bisection(double a1, double b1, double e1) {
	double c1;

	if (res(a1) * res(b1) >= 0) {
		cout << "Функция длины должна возвращать различные значения на ключах интервалов!" << endl;
		return NAN;
	}

	while ((b1 - a1) >= e1) {
		c1 = (a1 + b1) / 2;

		if (res(c1) == 0.0) {
			break;
		}


		if (res(c1) * res(a1) < 0) {
			b1 = c1;
		}
		else {
			a1 = c1;
		}
	}

	return (a1 + b1) / 2;
}


void Hw1::init_method() {
	double a1, b1, e1;
	cout << "Введите число a: ";
	cin >> a1;
	cout << "Введите число b: ";
	cin >> b1;
	cout << "Введите точность e: ";
	cin >> e1;
	Hw1 hw;
	double root1 = hw.bisection(a1, b1, e1);

	if (!isnan(root1)) {
		cout << "Найденный корень: " << root1 << endl;
	}
}
void Hw2::init_method() {
	double initial_guess, tolerance;
	cout << "Введите начальное значение (x0): ";
	cin >> initial_guess;
	cout << "Введите точность (e): ";
	cin >> tolerance;
	Hw2 hw;
	double root = hw.iterative_method(initial_guess, tolerance);
	cout << "Найденный корень: " << root << endl;
}



double Hw2::func_g(double input) {
	return sqrt(4 + input);
}

double Hw2::iterative_method(double initial_value, double precision) {
	assert(precision > 0);
	double next_value;
	do {
		next_value = func_g(initial_value);
		if (fabs(next_value - initial_value) < precision) {
			break;
		}
		initial_value = next_value;
	} while (true);
	return next_value;
}
