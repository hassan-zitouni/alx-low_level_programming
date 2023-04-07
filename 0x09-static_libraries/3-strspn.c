#include "main.h"
/**
 * _strspn - calculates the length of the initial segment of s that consists entirely of bytes in accept
 * @s: pointer to the string to search in
 * @accept: pointer to the string containing the characters to search for
 *
 * Return: the number of bytes in the initial segment of s that are in accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
break;
}
if (!accept[j])
break;
}
return (i);
}
