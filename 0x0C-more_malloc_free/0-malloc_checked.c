#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that allocates memeory using malloc
 * @b: the number of bytes to allocate
 *
 * Return: a pointer to allocated memeory if success and 98 if it fails.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
	exit(98);
	}

	return (ptr);
}
