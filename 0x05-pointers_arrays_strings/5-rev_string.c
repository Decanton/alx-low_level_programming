#include <stdio.h>
#include "main.h"

/**
 * rev_string - prints string n reverse
 * @s: string to be printed in reverse
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;
	int index = 0;
	char temp;

	while (s[index++])
	len++;

	for (index = len - 1; index >= len / 2; index--)
	{
	temp = s[index];
	s[index] = s[len - index - 1];
	s[len - index - 1] = temp;
	}
}

