#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: pointed destination
 * @accept: input
 * Return: always 0 (succes)
 */
char *_strpbrk(char *s, char *accept)
{
char *a;
for (; *s != '\0'; s++)
{
for (a = accept; *a != '\0'; a++)
{
if (*s == *a)
{
return (s);
}
}
}
return (NULL);
}
