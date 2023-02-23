#include "main.h"
#include <stdio.h>

/**
 * print_number - a function that prints an integer
 * @n: integer to be printed
 * Return: an integer
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
	n *= -1;
	_putchar('-');
	}
	i /= 10;
	if (i != 0)
	print_number(i);
	_putchar((unsigned int) n % 10 + '0');
}

