#include <stdio.h>
/**
 * main - prints all single digits from 0
 * of base 10
 * Return: 0 Always
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + 48 );
	}
	putchar('\n');
	return (0);
}
