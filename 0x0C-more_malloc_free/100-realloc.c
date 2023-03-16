#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer to old memory
 * @old_size: old size in bytes of the memory block
 * @new_size: new size in bytes of the memory block
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	char *wine, *relloc;
	unsigned int i;

	if (ptr != NULL)
	wine = ptr;
	else
	{ return (malloc(new_size)); }
	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr != NULL)
	{ free(ptr);
	return (0); }
	relloc = malloc(new_size);
	if (relloc == NULL)
	return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(relloc + i) = wine[i];
	}
	free(ptr);

	return (relloc);
}
