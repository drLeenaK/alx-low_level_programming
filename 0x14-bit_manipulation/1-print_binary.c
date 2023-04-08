#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_binary - function that prints the binary representation of a number
 * @n: a binary number
 */

void print_binary(unsigned long int n);

{
	for (int i = sizeof(unsigned long int); i >= 0; i--)
	{
		print_binary("%d\n", n >> i & 1);
	}
}
