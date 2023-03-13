#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strlen - Count array
 * @s: Array of elements
 * Return: Length of the array
 */

int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
	i++;
	}

	return (i);
}

/**
 * _strcpy - Copy arrays
 * @src: Source array
 * @dest: Destination array
 *
 * Return: Pointer to the destination array
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * _strdup - Duplicate a string
 * @str: Array of elements
 *
 * Return: Pointer to the new duplicated string
 */

char *_strdup(char *str)
{
	char *dst;
	unsigned int size;

	if (str == 0)
	{
	return (NULL);
	}

	size = _strlen(str) + 1;

	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
	return (NULL);
	}

	_strcpy(dst, str);
	return (dst);
}
