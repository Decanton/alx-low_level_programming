#include <stdio.h>
#include <unistd.h>
/**
 * main - a program that prints a text to a standard error
 * Return: Always 1 (Success)
 */
int main(void)
{
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
