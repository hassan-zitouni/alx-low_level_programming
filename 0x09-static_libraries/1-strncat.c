#include "main.h"
/**
 * _strncat - concatenate two strings up to n characters
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of characters to concatenate
 *
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest + _strlen(dest);
while (*src != '\0' && n--)
{
*ptr++ = *src++;
}
*ptr = '\0';
return (dest);
}
