#include "main.h"
/**
 * _strstr - locates a substring in a string
 * @haystack: the string to be searched
 * @needle: the substring to search for
 *
 * Return: pointer to the beginning of the located substring, or NULL if the
 * substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, k;
for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[0])
{
for (j = i, k = 0; needle[k] != '\0' && haystack[j] == needle[k]; j++, k++)
{
;
}
if (needle[k] == '\0')
{
return (haystack + i);
}
}
}
return (NULL);
}
