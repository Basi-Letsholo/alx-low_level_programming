#include <stdio.h>
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

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
