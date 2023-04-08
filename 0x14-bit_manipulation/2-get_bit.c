#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: value of a bit
 * @index:  index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int counter = 0;

	int *tmp;

	tmp = n;

	if (counter != index, counter++)
	{
		tmp = tmp->next;
	}

	return (tmp);
}
