#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to search for an integer in
 * @size: size of array
 * @cmp: compare function
 *
 * Return: returns the index or the matched element or -1 on failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
