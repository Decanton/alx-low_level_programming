#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count the words of.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i]; i++)
	{
	if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
	count++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words) or NULL if it fails.
 */
char **strtow(char *str)
{
	int i, j, k, len, words = 0;
	char **array;

	if (str == NULL || *str == '\0')
	return (NULL);

	words = count_words(str);

	array = malloc(sizeof(char *) * (words + 1));

	if (array == NULL)
	return (NULL);
	for (i = 0, k = 0; i < words; i++)
	{
	while (str[k] == ' ')
	k++;

	len = 0;

	for (j = k; str[j] && str[j] != ' '; j++)
	len++;

	array[i] = malloc(sizeof(char) * (words + 1));

	if (array[i] == NULL)
	{
	for (i--; i >= 0; i--)
	free(array[i]);
	free(array);
	return (NULL);
	}
	for (j = 0; j < len; j++, k++)
	array[i][j] = str[k];
	array[i][j] = '\0';
	}
	array[i] = NULL;
	return (array);
}
