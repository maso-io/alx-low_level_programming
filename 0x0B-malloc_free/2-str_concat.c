#include "main.h"

/**
 * str_concat - concatenates 2 strings
 * @s1: string one
 * @s2: string two
 *
 * Return: returns pointer to the nwly allocated memory location
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int len1, len2, i;

	if (!s1)
		len1 = 0;
	else
		for (len1 = 0; s1[len1] != '\0'; len1++)
			continue;
	if (!s2)
		len2 = 0;
	else
		for (len2 = 0; s2[len2] != '\0'; len2++)
			continue;

	str = (char *)malloc(len1 + len2 + 1);
	if (!str)
		return (NULL);
	for (i = 0; i < (len1 + len2); i++)
	{
		if (i < len1)
			*(str + i) = s1[i];
		else
			*(str + i) = s2[i - len1];
	}
	str[i] = '\0';

	return (str);
}
