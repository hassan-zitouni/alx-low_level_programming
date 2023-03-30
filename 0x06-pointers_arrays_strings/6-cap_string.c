#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @str: input value
 * Return: a pointer to the changed string
 */
char *cap_string(char *str)
{
int i = 0;
while (str[i])
{
while (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z'))
i++;
if (str[i - 1] == ',' ||
str[i - 1] == ';' ||
str[i - 1] == '.' ||
str[i - 1] == '!' ||
str[i - 1] == '?' ||
str[i - 1] == '"' ||
str[i - 1] == '(' ||
str[i - 1] == ')' ||
str[i - 1] == '{' ||
str[i - 1] == '}' ||
str[i - 1] == '\t' ||
str[i - 1] == '\n' ||
i == 0)
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
}
i++;
}
return (str);
}
