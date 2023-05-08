#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file
 * @filename: input
 * @letters: input
 * Return: the actual number of letters
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t d;
	ssize_t w;
	ssize_t t;

	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	t = read(d, b, letters);
	w = write(STDOUT_FILENO, b, t);

	free(b);
	close(d);
	return (w);
}

