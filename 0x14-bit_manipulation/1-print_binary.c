#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	ul_int mask;
	ul_int num;
	ul_int shift;

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
	while (mask)
	{
		if ((num & mask) & mask)
			_putchar('1');
		else if (((num & mask) & mask) == 0)
			_putchar('0');
		else
			return;
		mask >>= 1;
	}
}