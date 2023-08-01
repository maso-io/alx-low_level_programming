#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: area to copy memory to
 * @src: area to copy memory from
 * @n: number of bytes from memory to copy
 *
 * Return: pointer to memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
