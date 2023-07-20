#include "main.h"
/**
 * print_diagonal - Prints diagonal line in terminal
 * @n: Number of times to print \
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i < n + 1; i++)
		{
			for (j = 0; j < i; j++)
			{
				if (j == (i - 1))
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
