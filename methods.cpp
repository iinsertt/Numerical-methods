
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
}
