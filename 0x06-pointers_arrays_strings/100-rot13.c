#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: String to encode.
 * Return: Pointer to encoded string.
 */

char *rot13(char *s)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char r[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; a[j] != '\0'; j++)
	{
	if (s[i] == a[j])
	{
	s[i] = r[j];
	break;
	}
	}
	}

	return (s);
}
