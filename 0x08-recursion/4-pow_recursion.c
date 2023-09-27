#include "main.h"

/**
 * _pow_recursion - returns x to power y
 * @x: base
 * @y: exponent
 *
 * Return: x to the power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
