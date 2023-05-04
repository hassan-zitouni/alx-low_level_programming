#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * @n: input
 * @m: input
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, x = 0;
	unsigned long int c;
	unsigned long int e = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		c = e >> i;
		if (c & 1)
			x++;
	}

	return (x);
}

