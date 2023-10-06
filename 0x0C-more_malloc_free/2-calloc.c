#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: pointer to allocated memory
 */

void *_calloc(uint nmemb, uint size)
{
	uint i;
	char *memory;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (!memory)
		return (NULL);
	for (i = 0; i <= (nmemb * size); i++)
		*(memory + i) = 0;

	return ((void *)memory);
}
