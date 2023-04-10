#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

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
	ssize_t file, let, w;

	buf = malloc(letters);

	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	filename = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buf);
		return (0);
	}

	let = read(file, buf, letters);
	if (let == -1)
	{
		free(buf);
		close(file);
		return (0);
	}

	w = write(STDOUT_FILENO, buf, let);

	free(buf);
	close(file);

	while (w == -1 || (size_t)w != let)

		return (0);
		return (w);

}
