#include <stdio.h>
/**
 * main -  prints all possible combinations of two two-digit numbers.
 * Return: 0 Always
 */
int main(void)
{
	int r, s;

	for (r = 0; r <= 98; r++)
	{
	for (s = r + 1; s <= 99; s++)
	{
	putchar((r / 10) + '0');
	putchar((r % 10) + '0');
	putchar(' ');
	putchar((s / 10) + '0');
	putchar((s % 10) + '0');
	if (r == 98 && s == 99)
		continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}

