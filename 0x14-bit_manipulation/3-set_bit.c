#include "main.h"
/**
 * set_bit - sets bit at a given index to 1
 * @n: number to set bit in
 * @index: index
 * Return: 1 if it worked, or -1 if an error occourred
 */
int set_bit(ul_int *n, u_int index)
{
	ul_int num;
	ul_int mask;

	if (index > sizeof(u_int) * 8 || !n)
		return (-1);
	mask = 1;
	num = *n;
	mask <<= index;

	num |= mask;
	*n = num;

	return (1);
}
