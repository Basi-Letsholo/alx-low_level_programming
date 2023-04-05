#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * **alloc_grid - returns pointer to 2d array of ints
 *
 * @width: width of array
 * @height: height of array
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **new;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	new = malloc(sizeof(int) * height);

	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		new[i] = malloc(sizeof(int) * width);
		if (new[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(new[j]);
			}
		free(new);
		return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			new[i][j] = 0;
		}
	}
	return (new);

}
