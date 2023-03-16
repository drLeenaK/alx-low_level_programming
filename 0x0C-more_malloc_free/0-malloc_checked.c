#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 * @b: initialize the interger
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)

{
	int *b;

	b = malloc(sizeof(*b));
	printf("%d\n", b);
}
/**
 * malloc_checked - allocates memory
 *
 * Return: 98 fails
 */
void *malloc_checked(unsigned int b)
{
	m(b);
	return (98);
}
