#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - accepts width and height for a grid and returns it
 * @width: input parameter
 * @height: input parameter
 * Return: returns a 2D grid
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;
	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < height; i++)
	{
	grid[i] = malloc(height * sizeof(int));
		if (grid[i] == NULL)
		{
		return (NULL);
		}
		for (j = 0; j < width; j++)
		{
		grid[i][j] = 0;
		}
	}
return (grid);
}
