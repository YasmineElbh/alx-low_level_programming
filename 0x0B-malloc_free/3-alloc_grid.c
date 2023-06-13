#include "main.h"
#include <stdlib.h>

/**
 * int **alloc_grid - function that returns a pointer
 * @width: width
 * @height: height
 * Return: Null on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int	**allocg;

	if (width <= 0 || height <= 0)
		return (NULL);
	allocg = malloc(sizeof(int *) * height);
	if (allocg == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		allocg[i] = malloc(sizeof(int *) * width);	
		if (allocg[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(allocg[j]);
			free(allocg);
		}
		while (j < width)
		{
			allocg[i][j] = 0;
		}
	}
	return (allocg);
}
