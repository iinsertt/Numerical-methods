#pragma once
#define HEADER_H 

class Gaus {
public:
	virtual void init_method();
private:
	virtual void matrix(double a[][10], int n);
	virtual void elemfart(double a[][10], double x[], int n);
	virtual void back(double x[], int n);
};

class Kramer {
public:
	virtual void init_method();
private:
	virtual double metodKramera(double a[][10], int n);

};

class Lagrange {
public:
	virtual void init_method();

private:
	virtual double metodLagrange(double x[], double y[], int n, double X);
};


