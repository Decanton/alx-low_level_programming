#include "main.h"

/**
 * get_endianness - Checks the endianness of the machine
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 0x01;
	char *c = (char *)&num;

	return ((int)*c);
}
