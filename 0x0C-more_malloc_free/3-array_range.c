#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - a function that creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: a pointer to the array otherwise min > max return NULL
 * malloc fails Null
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;
	int size = max - min + 1;

	ptr = malloc(size * sizeof(int));
	if (min > max)
	return (NULL);

	if (ptr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	ptr[i] = min + i;

	return (ptr);
}

