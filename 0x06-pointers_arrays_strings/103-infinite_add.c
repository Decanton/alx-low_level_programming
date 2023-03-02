#include "main.h"

/**
 * infinite_add - adds two numbers stored as strings
 * @n1: the first number as a string
 * @n2: the second number as a string
 * @r: the buffer to store the result
 * @size_r: the size of the buffer
 * Return: pointer to the result, or 0 if result cannot be stored in r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0;
	char *p1 = n1, *p2 = n2, *pr = r;

	while (*p1++)
	len1++;
	while (*p2++)
	len2++;
	if (len1 + 1 > size_r || len2 + 1 > size_r)
	return (0);
	p1--, p2--, *pr++ = '\0';
	while (len1 || len2)
	{
	sum = carry;
	if (len1)
	sum += *--p1 - '0';
	if (len2)
	sum += *--p2 - '0';
	carry = sum / 10;
	*--pr = sum % 10 + '0';
	len1--, len2--;
	}
	if (carry)
	{
	if (size_r == 1)
	return (0);
	*--pr = carry + '0';
	}
	else if (*pr == '\0')
	{
	*--pr = '0';
	}
	return (pr);
}
