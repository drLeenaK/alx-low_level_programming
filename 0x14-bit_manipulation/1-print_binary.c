#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_binary - function that prints the binary representation of a number
 * @n: a binary number
 */

void print_binary(unsigned long int n);

{
	unsigned int n = 0;

	for (int i = sizeof(unsigned long int); i >= 0; i--)
	{
		printf("%d", (n >> i) & 1);
	}

	printf("\n");
}
