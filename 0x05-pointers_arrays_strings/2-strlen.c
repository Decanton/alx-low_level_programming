#include <stdio.h>

/**
 * _strlen - function that returns length of a string
 * @s: string length to be checked
 * Return: length of a string
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while(*str++)
	length++;
	return(length);
}

