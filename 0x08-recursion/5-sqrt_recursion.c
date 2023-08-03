#include "main.h"

/**
 * sq - returns a square
 * @index: number to check if it is a square
 * @value: number to the square of
 *
 * Return: square or -1, if it is not available
 */

int sq(int index, int value)
{
	if (index * index == value)
		return (index);
	else if (index * index > value)
		return (-1);
	else
		return (sq(index + 1, value));
}

/**
 * _sqrt_recursion - returns the squareroot of a number
 * @n: number to return sqaure root of
 *
 * Return: square root if available, otherwise -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sq(1, n));
}
