#include <iostream>
#include "header.h"

using namespace std;

void Gaus::init_method() {
	int n;
	cout << "Введите кол-во уравнений: ";
	cin >> n;
	double a[10][10], x[10];
	matrix(a, n);elemfart(a, x, n); back(x, n);


}

void Gaus::matrix(double a[][10], int n) {
	cout << "Введите коэф: ";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
		cin >> a[i][n];
	}
}

void Gaus::elemfart(double a[][10], double x[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			double ratio = a[j][i] / a[i][i];
			for (int k = 0; k <= n; k++) {
				a[j][k] = a[j][k] - ratio * a[i][k];
			}
		}
	}
	for (int i = n - 1;i >= 0;i--) {
		x[i] = a[i][n];
		for (int j = i + 1; j < n; j++) {
			x[i] = x[i] - a[i][j] * x[j];
		}
		x[i] = x[i] / a[i][i];
	}
}

void Gaus::back(double x[], int n) {
	cout << "Решение: ";
	for (int i = 0; i < n; i++) {
		cout << "x" << i + 1 << "=" << x[i] << endl;
	}
}


