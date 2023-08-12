#include "main.h"
char *allocate(char *, char *, unsigned int, unsigned int);
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
	unsigned int len_s1, len_s2;
	char *mem;

	if (s1 == NULL || s2 == NULL)
	{
		if (s1 != NULL)
			return (s1);
		if (s1 == NULL)
		{
			len_s1 = 0;
			len_s2 = strlen(s2);
		}
	}
	if (s1 != NULL && s2 != NULL)
	{
		len_s1 = strlen(s1);
		len_s2 = strlen(s2);
	}
	if (n > len_s2)
		mem = allocate(s1, s2, len_s1, len_s2);
	else
		mem = allocate(s1, s2, len_s1, n);
	return (mem);
}
/**
 * allocate - allocates and concatenates two strings
 * @s1: string one
 * @s2: string two
 * @len1: length of string 1
 * @len2: length of string 2
 * Return: memory allocated to concatenated string
 */
char *allocate(char *s1, char *s2, unsigned int len1, unsigned int len2)
{
	char *mem;
	unsigned int i, j;

	j = 0;
	mem = (char *)malloc(len1 + len2);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < len1 + len2 + 1; i++, j++)
	{
		if (i == len1)
			j = 0;
		if (i < len1)
			mem[i] = s1[j];
		else if (i >= len1 && i < (len1 + len2))
			mem[i] = s2[j];
		else
			mem[i] = '\0';
	}
	return (mem);
}
