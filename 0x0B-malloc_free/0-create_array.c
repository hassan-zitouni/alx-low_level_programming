#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * @size: the size of the array
 * @c: the char to file in the array
 * Return: the array filled
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;
if (size == 0)
{
return (NULL);
}
arr = malloc(size * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
