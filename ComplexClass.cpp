// ComplexClass.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "complex.h"


int main()
{
	while (1)
	{
		Complex complex;
		Complex a;
		a.Read();

		Complex b;
		b.Read();

		complex.menu();
		complex.EnterOperation(a, b);
	}

    return 0;
}

