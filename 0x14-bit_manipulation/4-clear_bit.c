#include "main.h"
/**
 * clear_bit - clears bit at a given index to 0
 * @n: number to set bit in
 * @index: index
 * Return: 1 if it worked, or -1 if an error occourred
 */
int clear_bit(ul_int *n, u_int index)
{
	ul_int num;
	ul_int mask;

	if (index > sizeof(ul_int) * 8 || !n)
		return (-1);
	mask = 1;
	num = *n;
	mask <<= index;

	mask = ~mask;
	num &= mask;
	*n = num;

	return (1);
}
