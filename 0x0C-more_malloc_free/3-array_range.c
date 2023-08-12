#include "main.h"
/**
 * array_range - creates an array of integer
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int i, count, min_val, *mem;

	min_val = min;
	count = 0;
	if (min > max)
		return (NULL);
	for (i = 0; min_val <= max; i++, min_val++)
		count++;
	min_val = min;
	mem = (int *)malloc(count * sizeof(int));
	for (i = 0; min_val <= max; i++, min_val++)
		*(mem + i) = min_val;
	return (mem);
}
