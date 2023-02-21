#include "main.h"
/**
 * print_alphabet - a function that prints alphabet in lowercase
 * Return: void
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
