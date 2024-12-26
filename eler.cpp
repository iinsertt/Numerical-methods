#include <iostream>
#include "header.h"
using namespace std;

double Eler::rect(double t, double y) {
	return y - t * t + 1;
}

void Eler::eler(double t0, double y0, double h, double tend) {
	double t = t0;
	double y = y0;

	cout << "t: " << t << ", y: " << y << endl;

	while (t < tend) {
		double k1 = rect(t, y);
		double k2 = rect(t + h, y + h * k1);
		y += h * (k1 + k2) / 2;
		t += h;

		cout << "t: " << t << ", y: " << y << endl;
	}
}

void Eler::init_method() {
	double t0, y0, h, tend;
	cout << "¬ведите начальное значение t0, y0: ";
	cin >> t0 >> y0;

	cout << "¬ведите шаг h: ";
	cin >> h;

	cout << "¬ведите конечное значение tend: ";

	cin >> tend;

	eler(t0, y0, h, tend);

}