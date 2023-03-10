#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the multiplication of two integers.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the program arguments.
 * Return: 0 if successful, 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}

	printf("Error\n");
	return (1);
}
