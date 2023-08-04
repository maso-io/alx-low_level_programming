#include "main.h"

/**
 * _strcmp - Compares two strings together
 * @s1: String one
 * @s2: String two
 *
 * Return: -1 for less than, 0 for equal and 1 for greater than.
 */

int _strcmp(char *s1, char *s2)
{
	int i, res;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			res = 0;
		else if (s1[i] < s2[i])
		{
			res = s1[i] - s2[i];
			break;
		}
		else
		{
			res = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (res);
}
