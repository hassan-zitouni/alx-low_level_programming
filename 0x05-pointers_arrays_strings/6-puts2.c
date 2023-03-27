#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
char *d = str;
int i = 0;
int y = 0;
int x;
while (*d != '\0')
{
d++;
i++;
}
y = i - 1;
for (x = 0; x <= y; x++)
{
if (x % 2 == 0)
{
_putchar(str[x]);
}
}
putchar('\n');
}
