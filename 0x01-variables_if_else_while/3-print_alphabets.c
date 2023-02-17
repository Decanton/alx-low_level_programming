#include<stdio.h>
/**
 * main - program printing the alphabet in both upper and lower
 * case
 * Return: 0 Always
 */

int main(void)
{
	char ap;

	for (ap = 'a'; ap <= 'z'; ap++)
		putchar(ap);
	for (ap = 'A'; ap <= 'Z'; ap++)
		putchar(ap);
	putchar("\n");
	return (0);
}
