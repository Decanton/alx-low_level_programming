#include <stdio.h>

/**
 *  main - prints numbers from 0 to 100.
 *  multiples of 3 print Fizz
 *  multiples of 4 print Buzz
 *  both 3 and 5 print FizzBuzz
 *  Return: the output higlightee above
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 == 0)
	{
	putchar('F');
	putchar('i');
	putchar('z');
	putchar('z');
	putchar('B');
	putchar('u');
	putchar('z');
	putchar('z');
	putchar(' ');
	}
	else if (i % 3 == 0)
	{
	putchar('F');
	putchar('i');
	putchar('z');
	putchar('z');
	putchar(' ');
	}
	else if (i % 5 == 0)
	{
	putchar('B');
	putchar('u');
	putchar('z');
	putchar('z');
	putchar(' ');
	}
	else
	{
	printf("%d ", i);
	}
	}
	return 0;
}
