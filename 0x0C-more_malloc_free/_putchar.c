#include "main.h"

/**
 * _putchar - writes character 'c' to stdout
 * @c: character to write
 *
 * Return: 0 (success), otherwise -1 on error.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
