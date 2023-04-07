#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates the first occurrence of character c in the string s
 * @s: pointer to the string to search in
 * @c: the character to search for
 *
 * Return: a pointer to the first occurrence of the character c in the string s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);
return (NULL);
}
