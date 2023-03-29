#include "main.h"

/**
 * _strncat - Write a function that concatenates two strings
 * use at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: string in reverse
 */
char *_strncat(char *dest, char *src, int n)
{
char *dest_start = dest;
while (*dest != '\0')
{
dest++;
}
while (n-- > 0 && *src != '\0')
{
*dest++ = *src++;
}
*dest = '\0';
return (dest_start);
}
