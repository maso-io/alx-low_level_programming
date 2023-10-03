#include "main.h"

/**
 * free_grid - function that free a two dimensional grid
 * @grid: pointer to 2D grid
 * @height: number of rows in the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid)
		for (i = 0; i < height; i++)
			free(*(grid + i));
	free(grid);
}
