#include "main.h"
/**
 * main - a function that prints alphabet in lowercase
 * Return: 0 Always
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
