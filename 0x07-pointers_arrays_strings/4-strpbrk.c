#include "main.h"

/**
 * _strpbrk - searches a string for any set of byte
 * @s: string
 * @accept: bytes to check for
 *
 * Return: returns pointer to first occurance of char in accept
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
			{
				return (&s[j]);
			}
		}
	}
	return (0x00);
}
