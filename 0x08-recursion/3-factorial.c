#include <stdio.h>
#include "main.h"
/**
 * factorial - returns factorila of a given number
 * @n: number whose factorila is being checked
 * Return: 1 for factorial 0
 * -1 for n lower than 0, and factorial of n
 */

int factorial(int n)
{
	if (n == 0)
	{
	return (1);
	}
	else if (n < 0)
	{
	return (-1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
