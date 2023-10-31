#include "main.h"
#include <stdlib.h>

/**
 * free_grid - The Entry Point.
 * Description - The function that frees a 2 dimensional grid.
 * @grid: The multidimensional array of integers.
 * @height: The height of the grid.
 * Return: .
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
