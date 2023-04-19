#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Write a function that executes a function
 * @array: input value
 * @size: input value
 * @action: input value
 * Return: string in reverse
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
