#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for a specific int
 *
 * @array: array
 * @size: size of array
 * @cmp: pointer function
 * Return: int, else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, new, r, flag = 0;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		r = -1;
	}
	for (i = 0; i < size; i++)
	{
		new = (*cmp)(array[i]);
		flag++;
		if (new != 0)
		{
			return (flag - 1);
		}
		else
		{
			r = -1;
		}
	}
	return (r);
}
