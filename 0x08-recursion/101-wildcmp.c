#include "main.h"

/**
 * wildcmp - compares two strings and returns 1
 * if they can be considered identical, 0 otherwise
 * @s1: the first string to compare
 * @s2: the second string to compare
 * which may contain the special character '*'
 * Return: 1 if the strings are identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	return (1);
	if (*s2 == '*') /* current character in s2 is '*' */
	{
	while (*s1 != '\0')
	{
	if (wildcmp(s1, s2 + 1)) /* try all possible matches */
	return (1);
	s1++;
	}
	return (wildcmp(s1, s2 + 1)); /* assuming '*' matches empty string */
	}

	if (*s1 == *s2) /* current characters in s1 and s2 match */
	return (wildcmp(s1 + 1, s2 + 1));

	return (0); /* strings are not identical */
}
