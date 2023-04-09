#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: is the value of a bit
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1ul << index);
		return (1);
}
