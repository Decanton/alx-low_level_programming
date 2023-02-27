#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts string to integer
 * @s: The pointer  to be converted
 * Return: an integer
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int in = 0;
	int min = 1;
	int isi = 0;

	while (s[c])
	{
	if (s[c] == 45)
	{
	min *= -1;
	}
	while (s[c] >= 48 && s[c] <= 57)
	{
	isi = 1;
	in = (in * 10) + (s[c] - '0');
	c++;
	}
	if (isi == 1)
	{
	break;
	}
	c++;
	}
	in *= min;
	return (in);
}
