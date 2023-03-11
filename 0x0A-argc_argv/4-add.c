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
	int i, j, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	result = i + j;
	printf("%d\n", result);

	else
		printf("0\n");
	return (0);
