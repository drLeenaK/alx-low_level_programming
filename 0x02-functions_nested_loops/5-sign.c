#include "main.h"
/**
 * print_sign - print the sign of number
 * @n: n will be checked
 * Return: 1 if n greater than zero, 0 if n is zero and -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

