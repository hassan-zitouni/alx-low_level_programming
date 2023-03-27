#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: string
 * return: lenght
 */
void puts_half(char *str)
{
int len = 0;
int start;
int i;
while (str[len] != '\0')
{
len++;
}
start = (len + 1) / 2;
for (i = start; i < len; i++)
{
putchar(str[i]);
}
putchar('\n');
}
