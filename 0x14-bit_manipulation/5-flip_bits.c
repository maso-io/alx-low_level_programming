#include "main.h"
/* returns the shift rquired */
u_int get_shift(ul_int n);
/**
 * flip_bits - number of bits you need to flip to change from number to number
 * @n: number 1
 * @m: number 2
 *
 * Return: number of bits
 */
u_int flip_bits(ul_int n, ul_int m)
{
	u_int shift_n;
	u_int shift_m;
	ul_int mask;
	ul_int n_xor_m;
	u_int shift;
	u_int count;

	shift_n = get_shift(n);
	shift_m = get_shift(m);
	shift = (shift_n > shift_m) ? shift_n : shift_m;

	count = 0;
	mask = 1;
	n_xor_m = m ^ n;
	mask <<= shift;
	while (mask >= 1)
	{
		count += (n_xor_m & mask) & mask ? 1 : 0;
		mask >>= 1;
	}

	return (count);
}
/**
 * get_shift - returns the bit shift required
 * @n: number to get bit shift of
 *
 * Return: shift
 */
u_int get_shift(ul_int n)
{
	ul_int num;
	u_int shift;

	num = n;
	shift = 0;
	while (num > 1)
	{
		shift++;
		num >>= 1;
	}
	return (shift);
}
