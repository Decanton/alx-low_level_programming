#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The integer to find the square root of.
 * Return: The integer value of the natural square root of n
 * if n does not have a natural square root, the function returns -1
 */
int _sqrt_help(int n, int low, int high);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0 || n == 1)
	{
	return (n);
	}
	else
	{
	return (_sqrt_help(n, 1, n));
	}
}

/**
 * _sqrt_help - A helper function for calculating the square root of n.
 * @n: The integer to find the square root of.
 * @low: The lower bound of the search interval.
 * @high: The upper bound of the search interval.
 * Return: The integer value of the natural square root of n.
 * If n does not have a natural square root, the function returns -1.
 */

int _sqrt_help(int n, int low, int high)
{
	int mid = (low + high) / 2;

	if (low > high)
	{
	return (-1);
	}

	if (mid * mid == n)
	{
	return (mid);
	}
	else if (mid * mid > n)
	{
	return (_sqrt_help(n, low, mid - 1));
	}
	else
	{
	return (_sqrt_help(n, mid + 1, high));
	}
}
