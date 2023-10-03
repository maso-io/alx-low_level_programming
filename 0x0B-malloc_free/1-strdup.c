#include "main.h"

/**
 * _strdup - copies the given string to a newly allocated space in memory
 * @str: string to copy
 *
 * Return: pointer to newly allocated memory space
 */

char *_strdup(char *str)
{
	int len, i;
	char *newStr;

	if (!str)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		continue;
	newStr = (char *)malloc(len * sizeof(char));
	if (!newStr)
		return (NULL);
	for (i = 0; i < len; i++)
		*(newStr + i) = str[i];

	return (newStr);
}
