#include "main.h"

/**
 * _abs - Returns the absolute value of a given value
 * @n: Integer value given
 *
 * Return: Returns absolute value of given number
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}
