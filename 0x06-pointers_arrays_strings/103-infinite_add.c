#include "main.h"
#include <stdio.h>
#include <string.h>

int _strlen(char *s);

/**
 * infinite_add - adds two numbers
 * @n1: first number to be added
 * @n2: second number to be added
 * @r: buffer to store the result
 * @size_r: size of buffer r
 * Return: pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, sum = 0;
	int len1 = _strlen(n1);
	int len2 = _strlen(n2);
	int i = len1 - 1, j = len2 - 1, k = 0;
	int m = 0, n = k - 1;

	while (i >= 0 || j >= 0 || carry > 0)
	{
		sum = carry;
		if (i >= 0)
		sum += n1[i] - '0';
		if (j >= 0)
		sum += n2[j] - '0';
		if (k >= size_r - 1)
		return (0); /* checks if output exceeds buffer */
		r[k++] = sum % 10 + '0';
		carry = sum / 10;
		i--;
		j--;
	}

	r[k] = '\0';
	while (m < n)
	{
		char temp = r[m];

		r[m] = r[n];
		r[n] = temp;
		m++;
		n--;
	}

	return (r);
}

/**
 * _strlen - computes the length of a string
 * @s: string whose length is to be computed
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
