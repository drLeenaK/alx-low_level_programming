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
	int a, b;
	int res = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(argv[a]);
	}
	printf("%d\n", res);
	return (0);
}

