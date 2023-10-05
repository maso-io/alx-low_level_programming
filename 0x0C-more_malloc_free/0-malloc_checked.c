#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of memory to allocate
 *
 * Return: pointer to allocated memory. 98 on error
 */

void *malloc_checked(uint b)
{
	void *mem;

	if (b > 0)
		mem = malloc(b);
	if (!mem || b <= 0)
		exit(98);

	return (mem);
}
