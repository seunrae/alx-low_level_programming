#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - accepts a 2d array and frees it
 * @grid: input parameter
 * @height: input parameter
 */
void free_grid(int **grid, int height)
{
int i;
	if (grid == NULL)
	{
	return;
	}
	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}
free(grid);
}
