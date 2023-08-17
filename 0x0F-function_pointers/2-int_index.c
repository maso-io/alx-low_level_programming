#include "function_pointers.h"
/**
 * int_index - fucntion that searches for a specific int
 * @array: array of integers to search from
 * @size: size of array
 * @cmp: pointer to function used to compare
 *
 * Return: index on integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int (*fp)(int);

	fp = cmp;
	for (i = 0; i < size; i++)
		if (&array[i] != NULL && fp(array[i]))
			return (i);
	return (-1);
}


