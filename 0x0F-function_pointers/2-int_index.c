#include <stdio.h>
#include "function_pointers.h"
/**
 * @array: array
 * @size: size of array
 * @cmp: pointer function
 * Return: int, else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, new, r, flag = 0;

	if (size <= 0)
	{
		r = -1;
	}
	for (i = 0; i < size; i++)
	{
		new = (*cmp)(array[i]);
		if (new == 0)
		{
			flag++;
			break;
			r = flag;
		}
		else
		{
			r = -1;
		}
	}
	return (r);
}
