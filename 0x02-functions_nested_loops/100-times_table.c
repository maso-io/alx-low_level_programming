#include "main.h"

/**
 * print_times_table - Prints all the multiples to up to 9 for given value
 * @n: The value integer given
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, x, res;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = i * j;
				if (res < 10)
				{
					_putchar(' ');
					_putchar('0' + res);
				}
				else if (res < 100)
				{
					_putchar('0' + res / 10);
					_putchar('0' + res % 10);
				}
				else
				{
					_putchar('0' + res / 100);
					x = (res % 100) / 10;

					_putchar('0' + x);
					_putchar('0' + x % 10);
				}
				if (!(j == n))
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
