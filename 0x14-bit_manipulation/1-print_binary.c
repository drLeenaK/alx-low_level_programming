#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_binary - function that prints the binary representation of a number
 * @n: a binary number
 */

void print_binary(unsigned long int n)

{
	if (n > 1)
	{
		print_binary(n / 2);
	}
}
