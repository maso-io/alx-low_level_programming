#include "main.h"

/**
 * _strncat - Concatenates n bytes from src to dest string
 * @dest: Dest string
 * @src: Source string
 * @n: Number of bytes
 *
 * Return: Dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, l1;

	l1 = 0;
	while (dest[l1] != '\0')
	{
		l1++;
	}
	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
		{
			dest[l1 + i] = src[i];
			break;
		}
		dest[l1 + i] = src[i];
	}
	return (dest);
}
