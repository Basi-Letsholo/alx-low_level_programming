#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * free_grid - frees 2d grid from alloc_grid
 *
 * @grid: address of 2d grid
 * @height: height
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
