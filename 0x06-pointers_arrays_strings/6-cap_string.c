#include "main.h"

/**
 * cap_string - Capitalizes all words
 * @s: Given input string
 *
 * Return: Capitalized words
 */

char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (
				s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' ||
				s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' ||
				s[i] == '\"' || s[i] == '(' || s[i] == ')' || s[i] == '{' ||
				s[i] == '}'
			)
		{
			if (s[i] == '\t')
				s[i] = ' ';
			i++;
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] = s[i] - 32;
			}
			continue;
		}
		i++;
	}
	return (s);
}
