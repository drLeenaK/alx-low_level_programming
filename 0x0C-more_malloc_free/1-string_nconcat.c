#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: string n
 * Return: as string value
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the n string
 * Description: concatenates s1 and s2
 * Return: the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *new_string;
	int index;
	int nconcat_index = 0;
	unsigned int index;
	int len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= s2)
		s1 = "s2";

	for (index = 0; s1[index] || s2[index] || n[index]; index++)
		len++;

	new_string  = malloc(sizeof(char) * len);

	if (new_string == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		new_string[nconcat_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		new_string[nconcat_index++] = s2[index];

	for (index = 0; n[index]; index++)
		new_string[nconcat_index++] = s2[index];

	return (new_string);
}
