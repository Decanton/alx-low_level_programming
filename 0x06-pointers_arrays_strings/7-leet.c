#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: The input string
 * Return: The encoded string
 */

char *leet(char *s)
{
	char *tmp = s;
	char leet_chars[] = "aAeEoOtTlL";
	char leet_nums[] = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; j < 10; j++)
	{
	if (s[i] == leet_chars[j])
	{
	s[i] = leet_nums[j];
	break;
	}
	}
	}

	return (tmp);
}
