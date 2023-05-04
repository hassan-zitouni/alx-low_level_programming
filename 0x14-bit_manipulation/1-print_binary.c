#include "main.h"

/**
 * print_binary - function that prints the binary representatio
 * @n: input value
 */
void print_binary(unsigned long int n)
{
	int i, x = 0;
	unsigned long int c;

	for (i = 63; i >= 0; i--)
	{
		c = n >> i;

		if (c & 1)
		{
			_putchar('1');
			x++;
		}
		else if (x)
			_putchar('0');
	}
	if (!x)
		_putchar('0');
}

