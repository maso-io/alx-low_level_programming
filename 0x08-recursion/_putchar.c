#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: char to write
 *
 * Return: On success 1.
 * On error, -1 id returned, and error is set appropriately
 */

int _putchar(char *c)
{
	return (write(1, &c, 1));
}
