#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates array of integers
 *
 * @min: min int
 * @max: max int
 * Return: array of int
 */

int *array_range(int min, int max)
{
	int *new, l, i;

	if (min > max)
	{
		return (NULL);
	}
	l = max - min;
	new = malloc(sizeof(int) * l);
	for (i = 0; i < l; i++)
	{
		new[i] = min++;
	}
	if (new == NULL)
	{
		return (NULL);
	}
	return (new);
}
