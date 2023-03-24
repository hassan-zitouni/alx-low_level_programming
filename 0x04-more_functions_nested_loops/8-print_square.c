#include "main.h"

/**
 * print_diagonal -  prints a square
 *@size: the number of square
 * Return: empty
 */
void print_square(int size)
{
int v, w;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (v = 0; v < size; v++)
{
for (w = 0; w < size; w++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
