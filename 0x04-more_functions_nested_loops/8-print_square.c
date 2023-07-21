#include "main.h"
/**
 * print_square - Prints the sqaure
 * @size: Size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int i, j, tmp;

	tmp = size;
	if (!(tmp == 0 || tmp < 0))
	{
		for (i = 0; i < tmp; i++)
		{
			for (j = 0; j < tmp; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
