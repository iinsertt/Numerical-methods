
#include <iostream>
#include "header.h"
int main()
{
    setlocale(LC_ALL, "rus");

    Gaus gaus;
    gaus.init_method();

    Kramer kramer;
    kramer.init_method();

    Lagrange lagrange;
    lagrange.init_method();

    Spline spline;
    spline.init_method();

    Integration integration;
    integration.init_method();

    Kyrt kyrt;
    kyrt.init_method();

    Eler eler;
    eler.init_method();

    Hw1 hw1;
    hw1.init_method();

    Hw2 hw2;
    hw2.init_method();
}