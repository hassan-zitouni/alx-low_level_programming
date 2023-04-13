#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array
 * @size: input
 * @nmemb: input
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr, *p;
unsigned int i;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
p = ptr;
for (i = 0; i < nmemb * size; i++)
{
*p++ = 0;
}
return (ptr);
}
