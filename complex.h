#ifndef COMPLEX_H
#define COMPLEX_H
#include "stdafx.h"

using namespace std;

class Complex
{
public:
	void add(Complex a, Complex b);
	void multiply(Complex a, Complex b);
	void substract(Complex a, Complex b);
	void division(Complex a, Complex b);
	void menu();
	void EnterOperation(Complex a, Complex b);
	void Read();
	void printResult(int r, int i);

private:
	double Re;
	double Im;
};

#endif // !COMPLEX_H
