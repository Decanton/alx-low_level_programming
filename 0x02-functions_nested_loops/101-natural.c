#include <stdio.h>

/**
 * main - program that outputs all multiples of 3,5
 * Return: Always 0
 */
int main(void)
{
	int i, p = 0;

	while (i < 1024)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	p += i;
	}
	i++;
	}
	printf("%d\n", p);
	return (0);
}
