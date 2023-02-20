#include<stdio.h>
/**
 * main - program printing the alphabet in both upper and lower
 * case
 * Return: 0 Always
 */

int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
