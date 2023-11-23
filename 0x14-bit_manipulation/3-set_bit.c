#include "main.h"
/**
 * set_bit - sets the bit at specified index position
 * @n: number to set bit on
 * @index: index position of bit
 *
 * Return: 1 on success, otherwise -1
 */
int set_bit(ul_int *n, u_int index)
{
	ul_int mask, num;

	if (index > sizeof(ul_int) * 8 || !n)
		return (-1);
	mask = 1;
	num = *n;
	mask <<= index;
	num |= mask;
	*n = num;

	return (1);
}
