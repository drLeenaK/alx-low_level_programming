#include "main.h"

/**
 * _strlen - returns length of the string
 * @s: string will be checked
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
