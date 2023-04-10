#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: name of a file to be read
 * @letters: string of characters
 * Return: the actual number of letters(bytes) it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;

	buf = malloc(letters);
	FILE *fp

	ssize_t t;

	if (filename == NULL)
	{
		return (0);
	}

	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (-1);
	}
	if (buf == NULL)
	{
		fclose(fp);
		return (-1);
	}
	t = fread(buf, 1, letters, fp);
	if (ferror(fp))
	{
		free(buf);
		fclose(fp);
		return (-1);
	}
	fwrite(buf, 1, t, stdout);
	free(buf);
	fclose(fp);
	return (t);
}
