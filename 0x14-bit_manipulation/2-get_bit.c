#include <limits.h>
#include <stdio.h>
#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to get bit at
 * @index: index of bit to get
 *
 * Return: the bit at specified index, or -1 on failure
 */
int get_bit(ul_int n, u_int index)
{
	int bit;
	ul_int mask, shift, num;

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
