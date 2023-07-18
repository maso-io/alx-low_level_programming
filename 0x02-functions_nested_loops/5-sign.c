#include "main.h"
/**
 * print_sign - prints the sign of a given number
 * @n: number given
 *
 * Return: Returns 1 (if +), returns -1 (if -) and 0 (for zero)
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
