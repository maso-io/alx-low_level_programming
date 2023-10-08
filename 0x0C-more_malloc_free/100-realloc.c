#include "main.h"

/**
 * _realloc - reallocates a block of memory
 * @ptr: pointer to memory previously allocated with malloc
 * @old_size: size of allocated space for ptr
 * @new_size: size of new memory
 *
 * Return: pointer to newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memory;

	if (!ptr && new_size > 0)
	{
		memory = malloc(new_size);
		if (memory)
		{
			free(ptr);
			return (memory);
		}
		return (NULL);
	}
	else if (ptr && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr && new_size == old_size)
	{
		return (ptr);
	}
	else
	{
		memory = malloc(new_size);
		if (memory)
		{
			free(ptr);
			return (memory);
		}
		return (NULL);
	}
}
