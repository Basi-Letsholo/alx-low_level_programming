#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - executes function on each element of array
 *
 * @size: size of array
 * @array: array
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
