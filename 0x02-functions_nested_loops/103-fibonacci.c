#include <stdio.h>
/**
 * main - sum of even valued terms in fibonacci
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	long j = i, k = 2, sum = k;

	while (k + j < 4000000)
	{
	k += j;
	if (k % 2 == 0)
	sum += k;
	j = k - j;
	++i;
	}
	printf("%ld\n", sum);
	return (0);
}
