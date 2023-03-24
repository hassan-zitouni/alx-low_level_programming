#include "main.h"

/**
 * print_triangle -  prints a triangle
 *@size: the number of the square triangle
 * Return: empty
 */
void print_triangle(int size)
{
int v, w, x;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (v = 0; v < size; v++)
{
for (w = size - 1; w > 1; w--)
{
_putchar(32);
}
for (x = 0; x <= v; x++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
