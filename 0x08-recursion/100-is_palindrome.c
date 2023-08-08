#include "main.h"
/**
 * palindrome - checks if palindrome
 * @s: string
 * @index: 'back' index
 *
 * Return: 1 (sucess), otherwise 0
 */

int palindrome(char *s, int index)
{
	int i, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
		len++;
	if (((len / 2) == 0 && *s == *(s + len - index)) ||
		((len / 2) == 1 && *s == *(s + len - index)))
		return (1);
	if (*s == *(s + len - index))
		return (palindrome(++s, index + 1));
	return (0);
}

/**
 * is_palindrome - check if string is a palindrome
 * @s: string
 *
 * Return: 1 (succes), otherwise, 0.
 */

int is_palindrome(char *s)
{
	char *p;

	p = s;
	if (s == NULL)
		return (0);
	return (palindrome(p, 1));
}
