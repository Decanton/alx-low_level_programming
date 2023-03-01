#include "main.h"
#include <string.h>

/**
 * cap_string - Capitalizes all words of a string
 * @str: Pointer to the string to modify
 * Return: Pointer to the resulting string
 */
char *cap_string(char *str)
{
	int i = 0;
	char sep[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || strchr(sep, str[i - 1]))
			{
				str[i] -= 32;
			}
		}
		i++;
	}

	return (str);
}
