#include "main.h"

/**
 * _puts - print string, new line, to stdout
 * @str: will be checked
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		puts(*str++);
	}
		puts('\n');
}
