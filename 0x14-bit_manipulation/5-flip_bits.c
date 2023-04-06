#include "main.h"

/**
 * flip_bits - counts the number of bits that are different between two numbers
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits that need to be flipped to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
