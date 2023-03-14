#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * *create_array - creates array of chars initialised w/ specific char
 * @size: unsigned int
 * @c: char
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *arr = (char *)malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	return (arr);
}
