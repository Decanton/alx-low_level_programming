#include "main.h"

/**
 * more_numbers - prints 10 times numbers form 0 to 14
 * Return: 0 always
 */

void more_numbers(void)
{
	int j, i;

	for (j = 0; j < 10; j++)
	{
		for (i = 48; i <= 52; i++)
		{
			if (i >= 50 && i <= 52)
			_putchar('1');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
}
