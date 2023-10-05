#include "main.h"

/**
 * len - returns lenght of string
 * @str: string
 *
 * Return: lenght string or -1 if NULL
 */
uint len(char *str)
{
	uint n = 0;

	if (!str)
		return (-1);
	for (n = 0; str[n] != '\0'; n++)
		continue;
	return (n);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1 to copy
 * @s2: string 2 to append (n-bytes) of with the s1 copy
 * @n: number of bytes to copy
 *
 * Return: memory with the twi strings concatenated, NULL on fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *data;
	uint len1, len2, bus;

	len1 = len(s1);
	len2 = len(s2);
	if (n >= len2)
		data = (char *)malloc(len1 + len2);
	else
	{
		if ((int)len2 != -1)
		{
			len2 = n;
			data = (char *)malloc(len1 + len2);
		}
		else
		{
			len2 = 0;
			data = (char *)malloc(len1);
		}
	}
	if (!data)
		return (NULL);
	for (bus = 0; bus <= len1 + len2; bus++)
	{
		if (bus < len1)
			data[bus] = s1[bus];
		else if (bus < len1 + len2)
			data[bus] = s2[bus - len1];
		else
			data[bus] = '\0';
	}

	return (data);
}
