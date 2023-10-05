#include "main.h"

/**
 * array_range - allocates memory for an array of integers
 * @min: min number in the array
 * @max: max number in the array
 *
 * Return: pointer to allocated memory
 */
int *array_range(int min, int max)
{
	int i, k, size;
	int *memory;

	k = 0;
	size = 0;
	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		size++;
	memory = (int *)malloc(size * sizeof(int));
	if (!memory)
		return (NULL);
	for (i = min; i <= max; i++)
		*(memory + (k++)) = i;

	return (memory);
}
