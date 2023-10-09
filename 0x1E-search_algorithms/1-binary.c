#include "search_algos.h"
/**
 * binary_search - implementation of binary search algo.
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of value location, else -1
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	{
		return (-1);
	}

	return (binary_search_func(array, 0, size - 1, value));
}

/**
 * binary_search_func - recusively partitions and searches for value
 * @array: pointer to array
 * @start: starting point of partition
 * @end: end point for partition
 * @value: value to search
 * Return: index, else -1
 */

int binary_search_func(int *array, size_t start, size_t end, int value)
{
	size_t mid_index;

	if (start <= end)
	{
		printf("Searching in array: ");
		print_array(array, start, end + 1);

		mid_index = start + (end - start) / 2;

		if (value == array[mid_index])
		{
			return (mid_index);
		}
		else if (value < array[mid_index])
		{
			return (binary_search_func(array, start, mid_index - 1, value));
		}
		else
		{
			return (binary_search_func(array, mid_index + 1, end, value));
		}
	}

	return (-1);
}

/**
 * print_array - prints array
 * @array: array to print
 * @start: starting index
 * @end: ending index
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	for (i = start; i < end; i++)
	{
		printf("%d", array[i]);
		if (i < end - 1)
		{
			printf(", ");
		}
		if (i == end - 1)
		{
			printf("\n");
		}
	}
}
