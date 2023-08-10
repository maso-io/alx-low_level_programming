#include "main.h"
/**
 * malloc_checked - returns pointer to allocated memory
 * @b: amount of memory to allocate
 *
 * Return: pointer to allocated memory (sucess) or status 98
 */

void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);
	if (memory == NULL)
		exit(98);
	return (memory);
}
