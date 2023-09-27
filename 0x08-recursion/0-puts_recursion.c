#include "main.h"
/**
 * _puts_recursion - prints string to std out char by char
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	if (s != NULL && *s != '\0')
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}

