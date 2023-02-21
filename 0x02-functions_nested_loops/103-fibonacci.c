#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms in the Fibonacci sequence
 * whose values do not exceed 4000000
 * Return: Always 0 (Success)
 */

int main(void)
{
	int previous = 1;
	int current = 2;
	int total = 2;

	while (current <= 4000000)
	{
		int next = previous + current;

		if (next % 2 == 0)
			total += next;

		previous = current;
		current = next;
	}

	printf("%d\n", total);

	return (0);
}
