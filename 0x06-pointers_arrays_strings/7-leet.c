#include "main.h"

/**
 * leet - Encodes string into 1337
 * @s: String to encode
 *
 * Return: Encoded string
 */

char *leet(char *s)
{
	int i, j;

	char set1[] = "aAeEoOtTlL";
	char set2[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
			if (s[i] == set1[j])
				s[i] = set2[j];
	}
	return (s);
}
