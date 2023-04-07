#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
char *ptr = dest + _strlen(dest);
while (*src != '\0')
{
*ptr++ = *src++;
}
*ptr = '\0';
return (dest);
}
