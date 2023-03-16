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
	int i = 0, t = min;
	int *ptr;
	int size = max - min + 1;

	ptr = malloc(size * sizeof(int));
	if (min > max)
	return (NULL);

	if (ptr == NULL)
	return (NULL);

	while (i <= max - min)
	ptr[i++] = t++;

	return (ptr);
}

