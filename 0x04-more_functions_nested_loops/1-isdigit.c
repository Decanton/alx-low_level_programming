#include "main.h"
/**
 * _isdigit - checks if a character is a digit
 * @c: character to be checked
 * Return: 1 if a digit and 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
