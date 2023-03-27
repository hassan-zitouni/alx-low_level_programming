#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: string
 * Return: return 0
 */
void print_rev(char *s)
{
char *end = s;
while (*end != '\0')
{
end++;
}
end--;
while (end >= s)
{
putchar(*end);
end--;
}
putchar('\n');
}
