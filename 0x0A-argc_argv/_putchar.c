#include <unistd.h>

/**
 * Writes a single character to the standard output stream
 * @param c The character to be written
 * @return On success, returns the written character. On failure, returns -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
