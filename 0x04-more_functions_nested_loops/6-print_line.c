#include "main.h"

void print_line(int n)
{
	int p;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (p = 1; p <= n; p++)
			_putchar('_');
	}

	_putchar('\n');
}
