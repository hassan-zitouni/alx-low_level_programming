#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: input
 * @text_content: input
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int d, w, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(d, text_content, l);

	if (d == -1 || w == -1)
		return (-1);

	close(d);

	return (1);
}

