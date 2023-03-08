#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if @s is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	char *rev = s;

	if (*s == '\0')
	return (1);

	while (*(rev + 1))
	rev++;

	while (rev > s)
	{
	if (*s != *rev)
	return (0);
	s++;
	rev--;
	}

	return (1);
}
