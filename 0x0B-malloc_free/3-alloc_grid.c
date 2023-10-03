#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D grid of integers
 * @width: number of columns in a row
 * @height: number of rows in the grid
 *
 * Return: a pointer to a 2D array of ints
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(height * sizeof(int));
	if (!grid)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(grid + i) = (int *)malloc(width * sizeof(int));
		if (!(*(grid + i)))
			return(NULL);
		for (k = 0; k < height; k++)
			*(*(grid + i) + k) = 0;
	}

	return (grid);
}
