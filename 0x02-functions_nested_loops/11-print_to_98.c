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

	while (tmp != 98)
	{
		if (tmp < 98)
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
		}
		else
		{
			_putchar('0' + tmp / 100);
			_putchar('0' + (tmp % 100) / 10);
			_putchar('0' + ((tmp % 100) / 10) % 10);
			tmp--;
		}
		_putchar(',');
		_putchar(' ');
	}
	if (tmp == 98)
	{
		_putchar('0' + 9);
		_putchar('0' + 8);
		_putchar('\n');
	}

}
