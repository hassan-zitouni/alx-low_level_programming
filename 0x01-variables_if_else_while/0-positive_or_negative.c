#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * This program generates a random number and prints whether it is positive,
 * negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is Zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}

