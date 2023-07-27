#include "main.h"

/**
 * string_toupper - Changes the given string to uppercase
 * @s: Input string
 *
 * Return: Pointer to string
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] <= 122 && s[i] >= 97)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
