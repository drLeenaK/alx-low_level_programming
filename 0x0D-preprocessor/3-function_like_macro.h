#ifndef _3_FUNCTION_LIKE_MACRO_H_
#define _3_FUNCTION_LIKE_MACRO_H_
#define ABS(x) (x >= 0 ? (x) : (-x))

/**
 * main - checks the code
 *
 * Return: 0 success
 */

int main(void)
{
	int i;
	int j;

	i = ABS(-98) * 10;
	j = ABS(98) * 10;
	printf("%d, %d\n", i, j);

	return (0);
}
