#include <iostream>
#include "header.h"


double Kyrt::rect(double t, double y) {
    return y - t * t + 1;
}

void Kyrt::rung(double t0, double y0, double h, double tEnd) {
    double t = t0;
    double y = y0;

    std::cout << "t: " << t << ", y: " << y << std::endl;

    while (t < tEnd) {
        double k1 = h * rect(t, y);
        double k2 = h * rect(t + h / 2, y + k1 / 2);
        double k3 = h * rect(t + h / 2, y + k2 / 2);
        double k4 = h * rect(t + h, y + k3);

        y += (k1 + 2 * k2 + 2 * k3 + k4) / 6;
        t += h;

        std::cout << "t: " << t << ", y: " << y << std::endl;
    }
}

void Kyrt::init_method() {
    double t0, y0, h, tEnd;
    std::cout << "¬ведите начальное значение t0: ";
    std::cin >> t0;
    std::cout << "¬ведите начальное значение y0: ";
    std::cin >> y0;
    std::cout << "¬ведите шаг h: ";
    std::cin >> h;
    std::cout << "¬ведите конечное значение tEnd: ";
    std::cin >> tEnd;

    rung(t0, y0, h, tEnd);

}