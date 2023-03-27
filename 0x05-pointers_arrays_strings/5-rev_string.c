#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input string
 * Return: string in reverse
 */
void rev_string(char *s)
{
char *start = s;
char *px = s;
char *end = s;
while (*end != '\0')
{
end++;
}
end--;
while (start < end)
{
char temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}
while (*px != '\0')
{
putchar(*px);
px++;
}
putchar('\n');
}
