#include "main.h"
#include <stdio.h>
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
	uint len;

	if (s2 != NULL)
		len = sizeof(s2);
	else
		len = -1;
	if (n >= len && s2 != NULL)
	{
		data = (char *)malloc((sizeof(s1) + n));
	}
	else
	{
		if (s2 != NULL)
			data = (char *)malloc((sizeof(s1) + sizeof(s2) - 1));
		else
			data = (char *)malloc(sizeof(s1));
	}
	if (!data)
		return (NULL);
	for (len = 0; len <= sizeof(data); len++)
	{
		printf("len : %d\tsizeof(data): %d\n", len, (uint)sizeof(data));
		if (len < sizeof(s1))
		{
			data[len] = s1[len];
		}
		else
		{
			printf("len : %d\ts1: %d\tdiff: %d\n", len, (int)sizeof(s1), len -
					(int)sizeof(s1));
			data[len] = s2[len - sizeof(s1)];
		}
	}

	return (data);
}
