#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * This program generates a random number and prints whether it is positive,
 * negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

/* print lowercase alphabet */
for (i = 0; i < 26; i++)
{
putchar('a' + i);
}
/* print uppercase alphabet */
for (i = 0; i < 26; i++)
{
putchar('A' + i);
}
/* print newline */
putchar('\n');
return (0);
}
