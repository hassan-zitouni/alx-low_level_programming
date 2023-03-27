#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: string
 * return: lenght
 */
void puts_half(char *str)
{
int len = 0;
while (str[len] != '\0')
{
len++;
}
int start = (len + 1) / 2;
for (int i = start; i < len; i++)
{
putchar(str[i]);
}
putchar('\n');
}
