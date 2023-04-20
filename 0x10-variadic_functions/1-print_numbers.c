#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - returns the sum of all its parameters
 * @n: input value
 * @...: input value
 * @separator: input value
 * Return: return 0
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
int num;
va_start(args, n);
for (i = 0; i < n; i++)
{
num = va_arg(args, int);
printf("%d", num);
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
