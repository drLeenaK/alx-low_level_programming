#include "main.h"
/**
 * _isupper - checks uppercase
 * @c: will be checked
 *
 * Return: 1 if c is upper and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
