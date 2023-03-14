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
	int **new = (int *new)malloc(sizeof(int) * width * height);

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
}
