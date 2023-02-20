#include <stdio.h>
/**
 * main - program printing alphabet letters in  reverse
 * Return: 0 always
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
