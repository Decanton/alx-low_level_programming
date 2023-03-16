#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that multiplies two integers
 * @argc: number of arguments
 * @argv: arguments values
 *
 * Return: 0 on success, 98 on error
 */

int main(int argc, char *argv[])
{
	char *num1, *num2;
	int i, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	for (i = 0; num1[i] != '\0'; i++)
	{
		if (!isdigit(num1[i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	for (i = 0; num2[i] != '\0'; i++)
	{
		if (!isdigit(num2[i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	mul = atoi(num1) * atoi(num2);
	printf("%d\n", mul);

	return (0);
}
