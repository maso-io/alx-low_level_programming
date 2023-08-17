#include "function_pointers.h"
/**
 * array_iterator - executes given array on a call-back function
 * @array: array of elements
 * @size: size of array
 * @action: pointer to function to execute
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	void (*fp)(int);

	fp = action;
	if (size > 0 && action != NULL && array != NULL)
	{
	for (i = 0; i < size; i++)
		fp(array[i]);
	}
}
