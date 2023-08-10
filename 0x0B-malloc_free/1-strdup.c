#include "main.h"
#include <stdio.h>

/**
 * _strdup - returns pointer to a duplication of string
 * @str: string to duplicate
 *
 * Return: pointer to duplicate string, or null if insufficient memory
 */

char *_strdup(char *str)
{
	if (str != NULL)
	{
		int i, n;
		char *p;

		i = 0, n = 0;
		for (i = 0; str[i] != '\0'; i++)
			n++;
		i = 0;
		p = (char *)malloc((n + 1) * sizeof(char));
		if (p != NULL)
		{
			while (*str != '\0')
			{
				*(p + i) = *str;
				str++;
				i++;
			}
			return (p);
		}
	}
	return (NULL);
}
