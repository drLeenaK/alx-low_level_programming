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
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
