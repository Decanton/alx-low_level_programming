#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of chars and initializes it with
 * specific char
 * @size: size of the array
 * @c: char to initialize
 * Return: a pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == NULL)
	{
		return (NULL);
	}
	else
	{
	position = 0;
	while (position < size)
	{
	*(buffer + position) = c;
	position++;
	}
	return (buffer);
	}
}
