#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - returns the sum of all its parameters
 * @format: input value
 * @...: input value
 * Return: return 0
 **/
void print_all(const char * const format, ...)
{
const char * const format_ptr = format;
int i;
char *s;
int printed = 0;
va_list args;
va_start(args, format);
while (*format_ptr)
{
switch (*format_ptr)
{
case 'c':
printf("%s%c", va_arg(args, int));
break;
case 'i':
printf("%s%d", va_arg(args, int));
break;
case 'f':
printf("%s%f", va_arg(args, double);
break;
case 's':
s = va_arg(args, char*);
if (s == NULL)
printf("(nil)");
else
printf("%s%s", s);
break;
default:
break;
}
if (*(format_ptr + 1) != '\0' && printed)
{
printf(", ");
}
printed = 0;
format_ptr++;
}
va_end(args);
printf("\n");
}
