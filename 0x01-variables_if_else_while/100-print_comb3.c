#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - all combinations of two digits
 * Return: 0 Always
 */

int main(void)
{
	int r, s;

	for (r = '0'; r < '9'; r++)
	{
	for (s = r + s; s <= '9'; s++)
	{
	if (s != r)
	{
	putchar(s);
	putchar(r);
	if (r == '8' && s == '9')
	continue;
	putchar (' , ');
	putchar (' ');
        }
	}
	}
	putchar('\n');
	return (0);
}
