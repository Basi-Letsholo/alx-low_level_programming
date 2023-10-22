#include "search_algos.h"
/**
 * jump_search - jump search algorithm
 * @array: array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of value location, else -1
 */

int jump_search(int *array, size_t size, int value)
{
	int index = 0;

	if (array == NULL)
	{
		return (-1);
	}

	if (array[index] == value)
	{
		return (index);
	}
	else
	{
		index = search_func(array, 0, size, value);
		if (index == -1)
		{
			return (-1);
		}

		return (index);
	}

	return (-1);
}

int search_func(int *array, size_t i, size_t size, int value)
{
	size_t current, block_size, j = 0, index;
	int j_val;

	block_size = sqrt(size);
	if (i * block_size >= size)
	{
		return (-1);
	}

	current = block_size * i;


	printf("Value checked array[%lu] = [%d]\n", current, array[current]);

	if (value == array[current])
	{
		return (current);
	}
	else if (value > array[current] && value <= array[current + block_size])
	{
		index = current + block_size;
		printf("Value found between indexes [%lu] and [%lu]\n", current, index);
		for (j = 0; j <= block_size; j++)
		{
			j_val = array[j + current];
			printf("Value checked array[%lu] = [%d]\n", j + current, j_val);
			if (value == array[j + current])
			{
				return ((j + current));
			}
		}
	}
	else
	{
		return (search_func(array, i + 1, size, value));
	}

	return (-1);
}
