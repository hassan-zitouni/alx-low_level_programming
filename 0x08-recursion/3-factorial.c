#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 * @n: input
 * Return: always 0 (succes)
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
