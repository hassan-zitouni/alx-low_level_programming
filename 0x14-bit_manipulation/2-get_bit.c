#include "main.h"

/**
 * get_bit - function that returns the value of a bit
 * @n: input
 * @index: input
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > 63)
		return (-1);

	b = (n >> index) & 1;

	return (b);
}

