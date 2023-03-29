#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: input value
 * @s2: input value
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] < s2[i] ? -1 : 1);
}
i++
}
if (s1[i] == '\0' && s2[i] == '\0')
{
return (0);
}
else if (s1[i] == '\0')
{
return (-1);
}
else
{
return (1);
}
}

