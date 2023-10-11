#include "function_pointers.h"
/**
 * array_iterator - executes call-back function on each element in array
 * @array: array to iterate over
 * @size: size of the array
 * @action: call-back function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	void (*f)(int);

	if (size <= 0 || !array || !action)
		return;
	f = action;
	for (i = 0; i < size; i++)
		f(array[i]);
}

