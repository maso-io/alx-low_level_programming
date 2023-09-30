#include "main.h"

/**
 * _strcat - Concatenates 2 strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to the destination string
 */

char *_strcat(char *dest, char *src)
{
	int i, l1, l2;

	l1 = 0;
	l2 = 0;
	while (dest[l1] != '\0')
	{
		l1++;
	}
	while (src[l2] != '\0')
	{
		l2++;
	}
	for (i = 0; i <= l2; i++)
	{
		dest[l1 + i] = src[i];
	}
	return (dest);
}
