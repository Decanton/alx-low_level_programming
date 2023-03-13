#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: Pointer to the concatenated string or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int len1 = 0, len2 = 0, i = 0;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}

	while (s1[len1] != '\0')
	{
	len1++;
	}

	while (s2[len2] != '\0')
	{
	len2++;
	}

	concat_str = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	if (concat_str == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
	concat_str[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
	concat_str[len1 + i] = s2[i];
	}
	concat_str[len1 + len2] = '\0';
	return (concat_str);
}
