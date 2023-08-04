#include "main.h"

/**
 * _strspn - gets the length of prefix substring
 * @s: string
 * @accept: bytes to check for
 *
 * Return: number of characters found
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	count = 0;
	for (i = 0; accept[i] != '\0'; i++)
		for (j = 0; s[j] != ' '; j++)
			if (s[j] == accept[i])
				count++;
	return (count);
}
