#include "main.h"
/**
 * clear_bit - sets the bit at given index to 0
 * @n: number to clear bit for
 * @index: index of bit to clear
 *
 * Return: 1 on success, otherwise -1
 */
int clear_bit(ul_int *n, u_int index)
{
	ul_int mask, num;

	if (index > sizeof(ul_int) * 8 || !n)
		return (-1);
	mask = 1;
	mask <<= index;
	mask = ~mask;
	num = *n;
	num &= mask;
	*n = num;

	return (1);
}
