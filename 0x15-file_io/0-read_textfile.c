#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: name of a file
 * @letters: string of characters
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}

	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}

	char *buffer = (char *) malloc(letters * sizeof(char));

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	ssize_t read_textfile = fread(buffer, sizeof(char), letters, file);

	if (read_textfile <= 0 || write(STDOUT_FILENO, buffer, read_textfile) != read_textfile)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	free(buffer);
	fclose(file);

	return (read_textfile);
}
