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
	if (len == 0 || len == 1)
		return (1);
	if (*s == *(s - len - index))
		return (palindrome(++s, index + 1));
	else
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
	if (s == NULL)
		return (0);
	else
		return (palindrome(s, 1));
}
