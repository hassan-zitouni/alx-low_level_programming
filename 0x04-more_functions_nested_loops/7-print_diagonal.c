#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 *@n: the number of lines to print diagonal
 * Return: empty
 */
void print_diagonal(int n)
{
int v, w;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (v = 0; v < n; v++)
{
for (w = 0; w < v; w++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
