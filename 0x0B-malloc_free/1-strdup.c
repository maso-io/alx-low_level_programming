#include "main.h"

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
		int i;
		char *p;

		i = 0;
		p = (char *)malloc(sizeof(str));
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
