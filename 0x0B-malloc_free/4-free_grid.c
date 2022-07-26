#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - frees a 2 dimensional grid previously
 * created by alloc_grid
 * @grid: multidimension array of integers
 * @height: height of the grid
 * Return: None
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
