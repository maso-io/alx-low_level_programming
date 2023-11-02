#include "main.h"
/* compares when wild card occurs */
int m_after_wild(char *s1, char *s2);
/**
 * wildcmp - compares two strings and returns 1 if identical
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 1 if the strings are identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if ((*s1 != *s2) && (*s2 == '*'))
		return (m_after_wild(s1, s2 + 1));
	if ((*s1 != *s2) && !(*s2 == '*'))
		return (0);
	if ((*s1 == *s2) && (*s1 == '\0'))
		return (1);
	return (wildcmp(s1 + 1, s2 + 1));
}
/**
 * m_after_wild - matches after '*' is encountered
 * @s1: string one
 * @s2: string after wild card
 *
 * Return: 1 on success, otherwise 0
 */
int m_after_wild(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (wildcmp(s1, s2));
	if ((*s1 != *s2) && (*s1 != '\0'))
		return (m_after_wild(s1 + 1, s2));
	return (0);
}
