#include <iostream>

#include "header.h"

void Lagrange::init_method() {
	int n;
	std::cout << "¬ведите кол-во точек: ";
	std::cin >> n;

	double x[10], y[10];
	std::cout << "¬ведите координаты x и y: ";
	for (int i = 0; i < n; i++) {
		std::cin >> x[i] >> y[i];
	}
	double X;
	std::cout << "¬ведите значение ’ дл€ интерпол€ции: ";
	std::cin >> X;

	double result = metodLagrange(x, y, n, X);
	std::cout << "–езультат интерпол€ции: " << result << std::endl;
}

double Lagrange::metodLagrange(double x[], double y[], int n, double X) {
	double result = 0;
	for (int i = 0; i < n; i++) {
		double term = y[i];
		for (int j = 0; j < n; j++) {
			if (j != i) {
				term = term * (X - x[j]) / (x[i] - x[j]);
			}
		}
		result += term;
	}
	return result;
}