#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - The Entry Point.
 * Description - The function that returns a
 * pointer to a 2 dimensional array of integers.
 * @width: The width of the array.
 * @height: The height of the array.
 * Return: pointer of the array of int.
 */

int **alloc_grid(int width, int height)
{
	int **g;
	int m, n;

	if (width < 1 || height < 1)
		return (NULL);

	g = malloc(height * sizeof(int *));
	if (g == NULL)
	{
		free(g);
		return (NULL);
	}

	for (m = 0; m < height; m++)
	{
		g[m] = malloc(width * sizeof(int));
		if (g[m] == NULL)
		{
			for (m--; m >= 0; m--)
				free(g[m]);
			free(g);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
		for (n = 0; n < width; n++)
			g[m][n] = 0;

	return (g);
}
