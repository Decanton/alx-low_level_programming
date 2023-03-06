#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * Return: Pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}