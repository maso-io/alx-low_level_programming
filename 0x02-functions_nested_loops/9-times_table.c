#include "main.h"

/**
 * times_table - Prints all the multiples to 9
 *
 * Return: void
 */


void times_table(void)
{
	int i, j, res;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			res = i * j;
			if (res < 10)
			{
				_putchar('0' + res);
			}
			else
			{
				_putchar('0' + res / 10);
				_putchar('0' + res % 10);
			}
			if (!(j == 9))
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
