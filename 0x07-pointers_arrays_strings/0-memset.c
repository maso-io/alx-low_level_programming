#include "main.h"

/**
 * _memset - fills n constant bytes to a place in memory
 * @s: pointer to memory area
 * @b: char to fill
 * @n: number of bytes to fill
 *
 * Return: pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
