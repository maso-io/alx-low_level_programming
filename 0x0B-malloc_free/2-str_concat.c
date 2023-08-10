#include "main.h"
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to newly concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, n1, n2;

	n1 = 0, n2 = 0, j = 0;
	for (i = 0; s1[i] != '\0'; i++)
		n1++;
	for (i = 0; s2[i] != '\0'; i++)
		n2++;
	s = (char *)malloc((n1 + n2 + 1) * sizeof(char));
	if (s != NULL)
	{
		for (i = 0; i < (n1 + n2); i++)
		{
			if (i == n1)
				j = 0;
			if (i < n1)
				s[i] = s1[j];
			else
				s[i] = s2[j];
			j++;
		}
		s[i] = '\0';
		return (s);
	}
	return (NULL);
}
