#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: input
 * @s2: input
 *
 * Return: the two strings
 */
char *str_concat(char *s1, char *s2)
{
char *result, *p;
int len1 = 0, len2 = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
result = malloc(len1 + len2 + 1);
if (result == NULL)
{
return (NULL);
}
p = result;
while (*s1 != '\0')
{
*p++ = *s1++;
}
while (*s2 != '\0')
{
*p++ = *s2++;
}
*p = '\0';
return (result);
}
