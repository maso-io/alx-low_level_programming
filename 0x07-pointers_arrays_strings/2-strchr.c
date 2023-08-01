#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to check in
 * @c: character to check for
 *
 * Return: pointer to the first occurance of character
 */

char *_strchr(char *s, char c)
{
	int i;
	char *p;

	p = s;
	for (i = 0; s[i] != c; i++)
		p++;
	return (p++);
}
