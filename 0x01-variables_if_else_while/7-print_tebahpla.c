#include <stdio.h>
/**
 * main - program printing alphabet letters in  reverse
 * Return: 0 always
 */

int main(void)
{
	char pd;

	for (pd = 'z'; pd >= 'a'; pd--)
		putchar(pd);
	putchar("\n");
	return (0);
}
