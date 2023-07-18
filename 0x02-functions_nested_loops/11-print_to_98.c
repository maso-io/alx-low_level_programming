#include "main.h"
/**
 * print_to_98 - Prints all numbers from given to 98
 * @n: Given integer
 *
 * Return: void
 */

void print_to_98(int n)
{
	int tmp = n;

	while (tmp < 99)
	{
		if (tmp < 0)
		{
			if (tmp > -10)
			{
				_putchar('-');
				_putchar('0' + (tmp * -1));
			}
			else
			{
				_putchar('-');
				_putchar('0' + (tmp * -1) / 10);
				_putchar('0' + (tmp * -1) % 10);
			}
		}
		else
		{
			if (tmp < 10)
			{
				_putchar('0' + tmp);
			}
			else
			{
				_putchar('0' + tmp / 10);
				_putchar('0' + tmp % 10);
			}
		}
		/* increment the given value */
		tmp++;
		/* check whether to print last comma */
		if (tmp > 98)
			continue;

		_putchar(',');
		_putchar(' ');
	}
}
