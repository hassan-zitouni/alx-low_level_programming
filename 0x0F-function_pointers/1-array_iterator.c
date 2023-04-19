#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Write a function that executes a function
 * use at most n bytes from src
 * @array: input value
 * @size: input value
 * @action: input value
 * Return: string in reverse
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
for (size_t i = 0; i < size; i++)
{
action(array[i]);
}
}
