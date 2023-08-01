#include "main.h"

/**
 * print_rev - Prints the reverse of a string
 * @str: Given string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i, j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
