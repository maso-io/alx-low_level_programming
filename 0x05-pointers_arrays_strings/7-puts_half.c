#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to print half of
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;
	if (count % 2 == 0)
		for (i = count / 2; i <= count; i++)
			_putchar(str[i]);
	else
		for (i = (((count - 1) / 2) - 1); i <= count; i++)
			_putchar(str[i]);
	_putchar('\n');
}
