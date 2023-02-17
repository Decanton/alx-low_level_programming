#include <stdio.h>
/**
 * main - all possible cominations of two digits numbers
 * Return: 0 always
 */

int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
	putchar(d);
	if (d != '9')
	{
	putchar(' , ');
	putchar (' ');
	}
	}
	putchar("\n")
	return (0);
}
