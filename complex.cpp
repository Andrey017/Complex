#include "complex.h"

void Complex::Read() {
	cout << "Enter Realy complex numbers: ";
	cin >> Re;
	cout << "Enter Imag complex numbers: ";
	cin >> Im;
}

void Complex::printResult(int r, int i) {
	cout << "\n" << "Result: ";

	if (r != 0) {
		cout << "" << r;
		if (i > 0 && i != 1) {
			cout << "+" << i;
		}
		if (i == 1) {
			cout << "+";
		}
		if (i < 0) {
			if (i != (-1)) {
				cout << "" << i;
			}
			else
				cout << "-";
		}
		if (i != 0) {
			cout << "i" << endl;
		}
	}
	else {
		if (i != 0) {
			if (i != 1 && i != (-1)) {
				cout << "" << i;
			}
			if (i == (-1)) {
				cout << "-";
			}
			cout << "i" << endl;
		}
		else
			cout << "0" << endl;
	}
	cout << "\n";
}

void Complex::add(Complex a, Complex b) {
	int r, i;
	r = a.Re + b.Re;
	i = a.Im + b.Im;
	printResult(r, i);
}

void Complex::substract(Complex a, Complex b) {
	int r, i;
	r = (-1 * b.Re) + a.Re;
	i = (-1 * b.Im) + a.Im;
	printResult(r, i);
}

void Complex::multiply(Complex a, Complex b) {
	int r, i;
	r = (a.Re*b.Re) - (a.Im*b.Im);
	i = (a.Re*b.Im) + (b.Re*a.Im);
	printResult(r, i);
}

void Complex::division(Complex a, Complex b) {
	int x1, x2, x3;
	x1 = (a.Re * b.Re) + (a.Im * b.Im);
	x2 = (b.Re * a.Im) - (a.Re * b.Im);
	x3 = (b.Re * b.Re) + (b.Im * b.Im);

	if (x2 > 0) {
		cout << "Result division: " << x1 << "/" << x3 << "+" << x2 << "/" << x3 << "i";
	}
	else
		cout << "Result division: " << x1 << "/" << x3 << x2 << "/" << x3 << "i";
	cout << endl;
}

void Complex::menu() {
	cout << "1 - Addition (+)\n" <<
		"2 - Subtraction (-)\n" <<
		"3 - Multiplication (x)\n" <<
		"4 - Division (/)\n" <<
		"Select an operation: ";
}

void Complex::EnterOperation(Complex a, Complex b) {
	char op;
	cin >> op;
	switch (op) {
	case '+': {
		add(a, b);
	}
			  break;
	case '-': {
		substract(a, b);
	}
			  break;
	case 'x': {
		multiply(a, b);
	}
			  break;
	case '/': {
		division(a, b);
	}
			  break;
	default: {
		cout << "Unknown action";
		break;
	}
	}
}
