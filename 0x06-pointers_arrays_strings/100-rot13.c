#include "main.h"

/**
 * rot13 - Encodes string using rot13
 * @s: String to encode
 *
 * Return: Encoded string
 */

char *rot13(char *s)
{
	int i, j;

	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
			if (s[i] == input[j])
				s[i] = output[j];
	}
	return (s);
}
