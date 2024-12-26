

#include "header.h"
#include<iostream>

double Integration::umn(double x) {
    return x * x;
}

double Integration::trule(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = (umn(a) + umn(b)) / 2.0;
    for (int i = 1; i < n; i++) {
        sum += umn(a + i * b);
    }
    return sum * h;
}

void Integration::init_method() {
    setlocale(LC_ALL, "rus");
    double a, b;
    int n;
    std::cout << "Введите границы интегрирования a и b: ";
    std::cin >> a >> b;
    std::cout << "Введите кол-во подынтервалов n: ";
    std::cin >> n;

    double result = trule(a, b, n);
   std::cout << "Результат интегрирования: " << result << std::endl;

}