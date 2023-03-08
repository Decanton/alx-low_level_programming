#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if a given string is a palindrome
 * @s: input string
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = strlen(s);
	int i;

	for (i = 0; i < len / 2; i++)
	{
	if (s[i] != s[len - i - 1])
	{
	return (0);
	}
	}

	return (1);
}
