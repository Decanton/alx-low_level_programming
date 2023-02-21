#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2,
 *         separated by a comma and a space
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int c;
	int count = 2;

	printf("%d, %d", a, b);

	while (count < 98)
	{
		c = a + b;
		printf(", %d", c);
		a = b;
		b = c;
		count++;
	}

	printf("\n");

	return (0);
}
