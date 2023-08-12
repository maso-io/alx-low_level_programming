#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in an array
 * @size: size of each element
 *
 * Return: pointer to that allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	return (mem);
}
