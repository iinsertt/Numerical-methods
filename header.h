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

class Spline {
public:
	virtual void init_method();
private: 
	virtual void CCoef(double x[], double y[], double a[], double b[], double c[], double d[], int n);
	virtual double spline(double x[], double y[], double a[], double b[], double c[], double d[], int n, double val);
};

class Integration {
public:
	virtual void init_method();
private:
	virtual double trule(double a, double b, int n);
	virtual double umn(double x);
};

class Eler {
public:
	virtual void init_method();
private:
	virtual double rect(double t, double y);
	virtual void eler(double t0, double y0, double h, double tend);
};

class Kyrt {
public:
	virtual void init_method();
private:
	virtual void rung(double t0, double y0, double h, double tEnd);
	virtual double rect(double t, double y);

};