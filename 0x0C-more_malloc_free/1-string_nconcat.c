#include "main.h"
#include <stdio.h>

/**
 * len - returns lenght of string
 * @str: string
 *
 * Return: lenght string or -1 if NULL
 */
uint len(char *str)
{
	uint n;

	if (str == NULL)
	{
		str = "";
		return (0);
	}
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
	uint len1, len2, i;

	len1 = len(s1);
	len2 = len(s2);

	if (n > len2)
	{
		data = (char *)malloc(len1 + len2 + 1);
	}
	else
	{
		len2 = n;
		data = (char *)malloc(len1 + len2 + 1);
	}
	if (!data)
		return (NULL);
	for (i = 0; i < len1; i++)
		data[i] = s1[i];
	for (i = 0; i < len2; i++)
		data[len1 + i] = s2[i];
	data[len1 + len2] = '\0';

	return (data);
}
