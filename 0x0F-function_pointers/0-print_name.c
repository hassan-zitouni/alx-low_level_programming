#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Write a function that prints a name
 * @name: input value
 * @f: input value
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}

