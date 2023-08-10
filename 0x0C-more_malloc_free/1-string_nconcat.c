#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes to concatenate from s2
 *
 * Return: pointer to newly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len_s1, len_s2;
	char *mem;

	j = 0;
	if (s1 == NULL || s1 == NULL)
	{
		if (s1 != NULL)
		{
			len_s1 = strlen(s1);
			len_s2 = 0;
		}
		else
		{
			len_s1 = 0;
			len_s2 = strlen(s2);
		}
	}
	if (s1 != NULL && s2 != NULL)
	{
		len_s1 = strlen(s1);
		len_s2 = strlen(s2) + 1;
	}
	if (n > len_s2)
	{
		mem = (char *)malloc(len_s1 + len_s2);
		if (mem == NULL)
			return (NULL);
		for (i = 0; i < len_s1 + len_s2; i++)
		{
			if (i == len_s1)
				j = 0;
			if (i < len_s1)
				mem[i] = s1[j];
			else
				mem[i] = s2[j];
			j++;
		}
	}
	else
	{
		mem = (char *)malloc(len_s1 + n);
		if (mem == NULL)
			return (NULL);
		for (i = 0; i < len_s1 + n; i++)
		{
			if (i == len_s1)
				j = 0;
			if (i < len_s1)
				mem[i] = s1[j];
			else
				mem[i] = s2[j];
			j++;
		}
	}
	return (mem);
}
