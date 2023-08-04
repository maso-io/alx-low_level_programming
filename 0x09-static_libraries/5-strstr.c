#include "main.h"

/**
 * _strstr - locates substring in string
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to first occourance
 */

char *_strstr(char *haystack, char *needle)
{
	int i, count, subsize;

	count = 0;
	subsize = 0;
	for (i = 0; *(needle + i) != '\0'; i++)
		subsize++;
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
			for (i = 0; i < subsize; i++)
				if (*(haystack + i) == *(needle + i))
					count++;
		if (count == subsize)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
