#include <stdio.h>

/**
 * main - This program prints all arguments it receives.
 * one per line
 * All arguments are printed, including the first one.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the program arguments.
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
