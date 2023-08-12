#include "main.h"
/**
 * _realloc - reallocates memory spcace
 * @ptr: pointer to old memory space
 * @old_size: size of old memory space
 * @new_size: size of new memory space
 *
 * Return: pointer to re-allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mem, *old_p;
	size_t i, min;

	if (old_size == new_size)
		return (ptr);
	else if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);
		return (mem);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	old_p = ptr;
	mem = malloc(new_size);
	if (mem == NULL)
		return (NULL);
	min = new_size;
	if (new_size > old_size)
		min = old_size;
	for (i = 0; i < min; i++)
		*(mem + i) = *(old_p + i);
	return (mem);
}
