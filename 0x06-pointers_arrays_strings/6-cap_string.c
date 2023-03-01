#include "main.h"
#include <string.h>

/**
 * cap_string - capitalizes all words of a string
 * @s: the input string
 *
 * Return: a pointer to the resulting string
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
	if (i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
	s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
	s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
	s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}')
	{
	if (s[i] >= 'a' && s[i] <= 'z')
	{
	s[i] = s[i] - 32;
	}
	}
	else
	{
	if (s[i] >= 'A' && s[i] <= 'Z')
	{
	s[i] = s[i] + 32;
	}
	}
	i++;
	}
	return (s);
}
