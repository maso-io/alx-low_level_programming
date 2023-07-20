#include "main.h"
/**
 * print_line - Prints straight line in terminal
 * @n: Number of times to print _
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
