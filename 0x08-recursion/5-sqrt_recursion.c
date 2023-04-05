#include "main.h"

int _sqrt_helper(int n, int start);
/**
 * _sqrt_recursion - a function that return natural square
 * @n: input
 * Return: always 0 (succes)
 */
int _sqrt_recursion(int n)
{
return (_sqrt_helper(n, 1));
}
/**
 * _sqrt_helper - a function that return natural square
 * @n: input
 * @start: input
 * Return: always 0 (succes)
 */
int _sqrt_helper(int n, int start)
{
int sqrt = start * start;
if (sqrt > n)
return (-1);
if (sqrt == n)
return (start);
return (_sqrt_helper(n, start + 1);
}
