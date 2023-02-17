#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that prints all the numbers of base 16 in lowercase
 * Return: 0 always
 */

int main(void)
{
	int fr;
	char ch;

	for (fr = '0'; fr <= '10'; fr++)
		putchar(fr);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar("\n");
	return (0);
}

