#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: number to convert
 */
void print_binary(ul_int n)
{
	ul_int mask, shift, num;

	num = n;
	mask = 1;
	shift = 0;
	if (num == 0)
	{
		_putchar('0');
		return;
	}
	while (num > 1)
	{
		shift++;
		num >>= 1;
	}
	mask <<= shift;
	num = n;
	do {
		if ((num & mask) & mask)
			_putchar('1');
		else if (((num & mask) & mask) == 0)
			_putchar('0');
		else
			return;
		mask >>= 1;
	} while (mask);
}
