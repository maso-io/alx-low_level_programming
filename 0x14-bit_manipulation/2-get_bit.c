#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index
 *
 * Return: the bit
 */
int get_bit(ul_int n, u_int index)
{
	ul_int num;
	ul_int mask;
	u_int shift;
	int bit;
	if (index > sizeof(ul_int) * 8)
		return (-1);
	shift = index;
	mask = 1;
	num = n;
	mask <<= shift;
	bit = (num & mask) & mask;

	if (bit)
		return (1);
	return (0);
}
