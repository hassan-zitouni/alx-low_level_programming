#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  a function that returns a pointer
 * @str: the string to duplicate
 * Return: On success, _strdup returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available.
 * If str is NULL, it returns NULL.
 */
char *_strdup(char *str)
{
int a = 0, i = 1;
char *s;
if (str == NULL)
{
return (NULL);
}
while (str[i])
{
i++;
}
s = malloc((i *sizeof(char)) + 1);
if (s == NULL)
{
return (NULL);
}
while (a < i)
{
s[a] = str[a];
a++;
}
s[a] = '\0';
return (s);
}
