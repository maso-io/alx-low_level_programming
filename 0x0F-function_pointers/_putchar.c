#include "function_pointers.h"
#include <unistd.h>
/**
 * _putchar - writes one character to the stdout
 * @c: character to write
 *
 * Return: 1 (number of byte written) , -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
