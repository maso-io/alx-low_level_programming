#include "main.h"

/**
 * argstostr - concatenates all arguments in your program
 * @ac: argument count
 * @av: argument vector
 *
 * Returns: returns pointer to a new string, or NULL if failure
 */

char *argstostr(int ac, char **av)
{
	int len, len_t, i, k;
	char *str;

	str = (char *)malloc(sizeof(char));
	if (ac == 0 || av == NULL || !str)
		return (NULL);
	len_t = 0;
	for (i = 0; i < ac; i++)
	{
		for (len = 0; av[i][len] != '\0'; len++)
			continue;
		len_t += len;
		str = (char *)realloc(str, ((len_t + 1) * sizeof(char)));
		if (!str)
			return (NULL);
		for (len = 0, k = len_t; av[i][len] != '\0'; len++, k--)
		{
			*(str + len_t - k) = av[i][len];
		}
		*(str + len_t + k) = '\n';
	}
	return (NULL);
}
