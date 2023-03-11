#include <stdlib.h>
#include <stdio.h>
/**
 * main - printing a name followed by a new  line
 * @argc: count commands
 * @argv: vector commands
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i

	printf("%d\n", argc - 1);
	printf("argv[]\n");

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", i, argv[i]);
	}
	return (0);
}

