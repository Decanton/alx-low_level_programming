#include <stdio.h>
#include <stdlib.h>
/**
 * main - write alphabet in lowercase
 * Return: 0 always
 */

int main(void)
{
	char aph;

	for (aph = 'a'; aph <= 'z'; aph++)
	{
		putchar(aph);
	}
	putchar("\n");
	return (0);
}
