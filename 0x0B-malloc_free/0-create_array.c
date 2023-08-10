#include "main.h"

/**
 * create_array - creates an array of size and fills it with char c
 * @size: size of array
 * @c: char to fill
 *
 * Return: pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	if (size != 0)
	{
		unsigned int i;
		char *array;

		array = (char *)malloc(size * sizeof(char));
		if (array == NULL)
			return (NULL);

		for (i = 0; i < size; i++)
			array[i] = c;
		return (array);
	}
	return (NULL);
}

