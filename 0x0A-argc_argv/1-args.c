#include "main.h"
#include <stdio.h>
/**
 * main - prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: always zero
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
