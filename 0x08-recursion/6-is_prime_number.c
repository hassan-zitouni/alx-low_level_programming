#include "main.h"

int _prime_number(int n, int i);
/**
 * is_prime_number - a function input integer
 * @n: input
 * Return: always 0 (succes)
 */
int is_prime_number(int n)
{
return (_prime_number(n, 1));
}
/**
 * _prime_number - a function input integer
 * @i: input
 * @n: input
 * Return: always 0 (succes)
 */
int _prime_number(int n, int i)
{
if (n <= 1)
{
return (0);
}
if (n % i == 0 && i > 1)
{
return (0);
}
if ((n / i) < i)
{
return (1);
}
return (_prime_number(n, i + 1));
}
