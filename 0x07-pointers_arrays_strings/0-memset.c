#include "main.h"

/**
 * *_memset - fills memeory with a constant byte
 * @n: pointer to the memory area to fill
 * @s: bytes to fill with
 * @b: number of bytes to fill
 * Return: a pointer to the memory areas s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
