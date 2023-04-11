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
int len = 0, i = 1;
char *copy;
if (str == NULL)
{
return (NULL);
}
while (str[len])
{
len++;
}
copy = malloc((len *sizeof(char)) + 1);
if (copy == NULL)
{
return (NULL);
}
while (i < len)
{
copy[i] = str[i];
}
copy [i] = '\0';
return (copy);
}
