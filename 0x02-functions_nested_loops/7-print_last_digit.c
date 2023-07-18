#include "main.h"

/**
 * print_last_digit - Prints the last digit of a given number
 * @n: Number given
 *
 * Return: Interger corresponding to last number
 */

int print_last_digit(int n)
{
	int tmp = _abs(n) % 10;

	_putchar('0' + tmp);
	return (tmp);
}
