#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 * @b: initialize the interger
 * Return: a pointer SUCCESS 98 fails
 */

void *malloc_checked(unsigned int b)

{
	int *ptr;

	ptr = malloc(b);

	if (b == NULL)
	exit(98);

	return (b);
}
