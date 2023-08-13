#include "main.h"
/**
 * free_grid - free 2-d array from memory
 * @grid: pointer to 2D array
 * @height: height of 2D array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int **mem, i;

	mem = grid;
	for (i = 0; i < height; i++)
		free(*(mem + i));
	free(mem);
}
