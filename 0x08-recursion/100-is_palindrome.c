#include "main.h"
#include <string.h>
/**
 * palindrome_check - recursive check if char's are equal
 * @s: string to check
 * @start: start index of string
 * @end: end index of string
 *
 * Return: 1 (sucess), otherwise 0
 */

int palindrome_check(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (palindrome_check(s, start + 1, end - 1));
}

/**
 * is_palindrome - check if string is a palindrome
 * @s: string
 *
 * Return: 1 (succes), otherwise, 0.
 */

int is_palindrome(char *s)
{
	int length;

	length = strlen(s);
	if (s == NULL)
		return (0);
	return (palindrome_check(s, 0, length - 1));
}
