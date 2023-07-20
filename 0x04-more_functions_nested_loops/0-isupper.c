#include "main.h"
/**
 * _isupper - Checks if char is uppercase
 * @c: Given char
 *
 * Return: 1 if is upper, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
