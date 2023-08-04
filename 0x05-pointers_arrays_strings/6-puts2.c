#include "main.h"

/**
 * puts2 - prints every other 2nd character
 * @s: string provided
 *
 * Return: void
 */

void puts2(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!(i % 2))
			_putchar(s[i]);
	}
	_putchar('\n');
}
