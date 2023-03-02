#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints the content of a buffer in a specific format
 * @b: pointer to the buffer to print
 * @size: size of the buffer in bytes
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x ", i);

		for (j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				printf("%02x ", *(b + j) & 0xff);
			}
			else
			{
				fputs("   ", stdout);
			}
		}

		fputs(" ", stdout);

		for (j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				if (*(b + j) >= 32 && *(b + j) <= 126)
				{
					putchar(*(b + j));
				}
				else
				{
					putchar('.');
				}
			}
		}

		putchar('\n');
	}
}
