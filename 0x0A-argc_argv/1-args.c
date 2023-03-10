#include <stdio.h>

/**
 * main - prints number of arguments passed
 * @argc: counts number of arguments
 * @argv: arguments
 * Return: Always 0 (sucess)
 */

int main(int argc, char *argv[])
{
	int num_args = argc - 1;
	(void) argv;

	printf("%d\n", num_args);
	return (0);
}
