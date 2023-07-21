#include "main.h"
/**
 * print_number - Prints an integer
 * @n: number to print
 *
 * Return: void
 */

void print_number(int n)
{
	int tmp = n;

	if (n < 0)
	{
		tmp *= -1;
	}

	if (n < 10)
	{
		if (n < 0)
			_putchar('-');
		_putchar('0' + tmp);
	}
	else if (n < 100)
	{
		if (n < 0)
			_putchar('-');
		_putchar('0' + tmp / 10);
		_putchar('0' + tmp % 10);
	}
	else if (n < 1000)
	{
		if (n < 0)
			_putchar('-');
		_putchar('0' + tmp / 100);
		_putchar('0' + ((tmp / 100) % 100) / 10);
		_putchar('0' + ((tmp / 100) % 100) % 10);
	}
	else
	{
		if (n < 0)
			_putchar('-');
		_putchar('0' + tmp / 1000);
		_putchar('0' + ((tmp / 1000) % 1000) / 100);
		_putchar('0' + (((tmp / 1000) % 1000) % 100) / 10);
		_putchar('0' + (((tmp / 1000) % 1000) % 100) % 10);
	}
}
