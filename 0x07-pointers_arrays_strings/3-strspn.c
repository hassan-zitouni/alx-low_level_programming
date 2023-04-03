#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: pointed destination
 * @accept: input
 * Return: always 0 (succes)
 */
unsigned int _strspn(char *s, char *accept)
{
int i;
unsigned int count = 0;
int is_accept;
while (*s != '\0')
{
is_accept = 0;
for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
{
is_accept = 1;
break;
}
}
if (!is_accept)
{
break;
}
count++;
s++;
}
return (count);
}
