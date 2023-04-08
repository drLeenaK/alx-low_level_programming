#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint -  function that converts a binary number
 * to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return:  the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int len = strlen(binary);

	for (int i = 0; i < len; i++)
	{
		uint += (binary[len - i - 1] - '0') * pow(2, i);
	}
	return uint;
}
