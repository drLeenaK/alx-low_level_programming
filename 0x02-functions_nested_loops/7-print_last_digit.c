#include "main.h"
/**
 * print_last_digit - last digit will be printed
 * @i: Will be checked
 *
 * Return: value of the last number
 */
int print_last_digit(int i)
{
	int last = i % 10;

	if (i < 0)
		last *= -1;
	_putchar(last + '0');

	return (last);
}
