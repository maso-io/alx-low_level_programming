#include "main.h"
/* calc the power of a base 2 index */
u_int b_u(u_int x, u_int i);
/* reverses a string */
char *rev(const char *b);
/**
 * binary_to_uint - converts a binary number to an u_int
 * @b: binary string
 *
 * Return:unsigned int
 */
u_int binary_to_uint(const char *b)
{
	u_int num, i;
	char *s;

	if (!b)
		return (0);
	s = rev(b);
	if (!s)
		return (0);
	i = 0;
	num = 0;
	while (*s)
	{
		if (*s == '0')
			num += b_u(0, i);
		else if (*s == '1')
			num += b_u(2, i);
		else
			return (0);
		i++;
		s++;
	}
	return (num);
}
/**
 * b_u - gets the power of base-2 to pow i
 * @x: base format
 * @i: index of base 2
 *
 * Return: the product
 */
u_int b_u(u_int x, u_int i)
{
	if (i == 0 && x == 0)
		return (0);
	if (i == 0 && x != 0)
		return (1);
	if (i == 1)
		return (x * b_u(x, i - 1));

	return (x * b_u(x, i - 1));
}
/**
 * rev - reverses a string
 * @b: string binary
 *
 * Return: reversed string
 */
char *rev(const char *b)
{
	int i, r;
	char *tmp;

	for (i = 0; b[i] != '\0'; i++)
		continue;
	tmp = (char *)malloc(sizeof(char) * (i + 1));
	if (!tmp)
		return (NULL);
	r = 0;
	while (i)
	{
		i--;
		tmp[r] = b[i];
		r++;
	}
	tmp[r] = '\0';
	return (tmp);
}
