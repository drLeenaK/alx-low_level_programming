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
	int len = strlen(b);

	for (int i = 0; i < len; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
		uint = uint * 2 + (b[i] - '0');
		return (uint);
		}
		else
		{
			return (NULL);
		}
	}
}
