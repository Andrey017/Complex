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

