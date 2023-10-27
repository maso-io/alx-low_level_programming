#include "main.h"
/**
 * _putchar - writes character to std out
 * @c: character to write
 *
 * Return: number of character writen
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
