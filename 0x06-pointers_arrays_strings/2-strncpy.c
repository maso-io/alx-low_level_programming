#include "main.h"

/**
 * _strncpy - Copies n bytes of src string to dest string
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes to copy from source
 *
 * Return: Destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
