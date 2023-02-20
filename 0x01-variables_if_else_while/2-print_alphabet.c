#include <stdio.h>
/**
 * main - write alphabet in lowercase
 * Return: 0 always
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
