#include "main.h"

/**
 * print_number - Prints the number given
 * @n: Input number
 *
 * Return: Void
 */

void print_number(int n)
{
	int val, i;

	val = n;
	if (val < 0)
	{
		_putchar('-');
		val *= -1;
	}
	if (val <	10)
		_putchar('0' + val);
	else if (val < 100)
	{
		_putchar('0' + val / 10);
		_putchar('0' + val % 10);
	}
	else if (val < 1000)
	{
		_putchar('0' + val / 100);
		_putchar('0' + (val % 100) / 10);
		_putchar('0' + (val % 100) % 10);
	}
	else if (val < 10000)
	{
		i = val / 1000;
		_putchar('0' + i);
		i = (val % 1000) / 100;
		_putchar('0' + i);
		i = val % 100;
		_putchar('0' + i / 10);
		_putchar('0' + i % 10);
	}
}
