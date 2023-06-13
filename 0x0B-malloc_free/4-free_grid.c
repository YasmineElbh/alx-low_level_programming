#include "main.h"

/**
 * free_grid - function tha free 2 dimansional grid
 * @grid: grid
 * @height: height
 * Return: result
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
