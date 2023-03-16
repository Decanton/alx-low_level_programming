#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory block to be reallocated
 * @old_size: old size in bytes of the allocated space for ptr
 * @new_size: New size in bytes of the new memory block
 * Return: Pointer to the newly allocated memory block
 *         NULL if new_size is 0 and ptr is not NULL
 *         NULL if malloc fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	if (new_size < old_size)
	{
		memcpy(new_ptr, ptr, new_size);
	}
	else
	{
		memcpy(new_ptr, ptr, old_size);
	}

	free(ptr);

	return (new_ptr);
}
