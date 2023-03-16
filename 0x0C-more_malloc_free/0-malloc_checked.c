#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory
 * @b: bytes of memory to allocate
 * Return: a pointer SUCCESS 98 fails
 */

void *malloc_checked(unsigned int b)

{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
