#include "main.h"

/**
 * create_array - creates an array of chars and initializes it with given char
 * @size: size of array
 * @c: char to initialize array
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	uint i;
	char *chars;

	if (size == 0)
		return (NULL);
	chars = (char *)malloc(size * sizeof(c));
	if (!chars)
		return (NULL);
	for (i = 0; i < size; i++)
		*(chars + i) = c;

	return (chars);
}
