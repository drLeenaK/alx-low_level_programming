#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* positive_or_negative - gives correct output
* Description: prints if a number is positive or negative
* @i: Will be printed
* Return: 0
*/
void positive_or_negative(int i)
{
	int i;

	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	return (0);
}
