#include "main.h"
/**
 * print_triangle - Prints triangle
 * @size: Size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int tmp, i, j;

	tmp = size;
	if (!(tmp == 0 || tmp < 0))
	{
		for (i = 1; i < size + 1; i++)
		{
			for (j = size; j > 0; j--)
			{
				if (j <= i)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
