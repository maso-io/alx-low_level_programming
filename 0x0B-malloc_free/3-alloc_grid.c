#include "main.h"
/**
 * alloc_grid - allocated memory to a 2-d array of int
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to 2-D array
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, **mem;

	if (width <= 0 || height <= 0)
		return (NULL);
	mem = (int **)malloc(height * sizeof(int *));
	if (mem == NULL)
	{
		free(mem);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(mem + i) = (int *)malloc(width * sizeof(int));
		if (*(mem + i) == NULL)
		{
			for (k = i; k >= 0; --i)
				free(*(mem - k));
			free(mem);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			mem[i][j] = 0;
	}
	return (mem);
}
