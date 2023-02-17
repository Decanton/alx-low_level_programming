#include <stdio.h>
/**
 * main - print alphabet in lower case except q and e
 * Return: 0 Always
 */

int main(void)
{
	char ap;

	for (ap = 'a'; ap <= 'z'; ap++)
	{
		if (ap != 'q' && ap != 'e')
			putchar(ap);
	}
	putchar("\n");
	return (0);
}

