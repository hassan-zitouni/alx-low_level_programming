#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: pointed destination
 * @src: input
 * @n: input
 * Return: always 0 (succes)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *dest_ptr = dest;
char *src_ptr = src;
while (n-- > 0)
{
*dest_ptr++ = *src_ptr++;
}
return (dest);
}
