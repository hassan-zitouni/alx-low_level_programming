#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 * @a: array name
 * @n: is the number of elements of the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
int i;
int num = 0;
int digit = 0;
for (i = 0; i < n; i++)
{
num = a[i];
while (num > 0)
{
digit = num % 10;
putchar('0' + digit);
num /= 10;
}
if (i < n - 1)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
