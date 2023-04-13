#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: input
 * @s2: input
 * @n: input
 * Return: point to a newly allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2, i;
char *result, *p;
if (!s1)
s1 = "";
if (!s2)
s2 = "";
len1 = 0;
while (s1[len1])
len1++;
len2 = 0;
while (s2[len2] && len2 < n)
len2++;
result = malloc(len1 + len2 + 1);
if (!result)
return (NULL);
p = result;
while (*s1)
*p++ = *s1++;
for (i = 0; i < len2; i++)
{
*p++ = *s2++;
}
*p = '\0';
return (result);
}
