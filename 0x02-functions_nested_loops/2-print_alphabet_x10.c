#include <stdio.h>
/**
 * main - function that prints the alphabet 10 times in lower case
 * Return: no trurn type
 */
void print_alphabet_x10(void);
{
	char c = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		return (0);
	}
}
