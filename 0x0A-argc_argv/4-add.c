#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - printing a name followed by a new  line
 * Description: adds two positive numbers
 * @argc: count commands
 * @argv: vector commands
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		char *p = argv[1];

		while (*p)
		{
			if (!isdigit(*p))
			{
				printf("Error\n");
				return (1);
			}
			p++;
		}
		sum += atoi(argv[i]);
	}
	printf("Total = %d\n", sum);
	return (0);
}
