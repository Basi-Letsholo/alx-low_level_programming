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
	int **new = malloc((sizeof(int) * height * width) + 1);

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (new)
	{
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				new[j][i] = 0;
			}
		}
	}
	else
	{
		return (NULL);
	}
	return (new);
}
