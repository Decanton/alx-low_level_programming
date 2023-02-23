#include "main.h"

/**
 *  print_diagonal - prints diagonal lines
 *  @n: number of times it printed
 *  Return: diagonal lines
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int i, j;

	for (i = 0; i < n; i++)
	{
	for (j = 0; j < i; j++)
	{
	_putchar(32);
	}
	_putchar(92);
	}
	}
}

