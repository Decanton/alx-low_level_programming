#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checks if a given number is prime
 * @n: input integer
 * @i: divisor
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}

	return (check_prime(n, 2));
}

/**
 * check_prime - checks if a given number is prime
 * @n: input integer
 * @i: divisor to check if it divides n
 * Return: 1 if prime, 0 otherwise
 */

int check_prime(int n, int i)
{
	if (i == n)
	{
	return (1);
	}

	if (n % i == 0)
	{
	return (0);
	}

	return (check_prime(n, i + 1));
}
