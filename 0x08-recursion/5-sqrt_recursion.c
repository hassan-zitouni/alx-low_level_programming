#include "main.h"

int _sqrt_helper(int n, int start, int end);
/**
 * _sqrt_recursion - a function that return natural square
 * @n: input
 * Return: always 0 (succes)
 */
int _sqrt_recursion(int n)
{
return (_sqrt_helper(n, 0, n));
}
/**
 * _sqrt_helper - a function that return natural square
 * @n: input
 * @end: input
 * @start: input
 * Return: always 0 (succes)
 */
int _sqrt_helper(int n, int start, int end)
{
int mid = 0;
if (start > end)
{
return (-1);
}
mid = (start + end) / 2;
if (mid *mid == n)
{
return (mid);
}
else if (mid *mid > n)
{
return (_sqrt_helper(n, start, mid - 1));
}
else
{
return (_sqrt_helper(n, mid + 1, end));
}
}
