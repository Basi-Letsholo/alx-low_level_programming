#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - reallocates a memory block
 *
 * @ptr: pointer with prev. memory
 * @old_size: size of ptr (bytes)
 * @new_size: new size in bytes
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;

	if (ptr == NULL)
	{
		free (ptr);
		new = malloc(new_size);
	}
	else
	{
		if (new_size == 0)
		{
			return (NULL);
		}
		if (new_size == old_size)
		{
			new = ptr;
		}
		if (new_size < old_size)
		{
			free(ptr);
			new = malloc(new_size);
		}
		if (new_size > old_size)
		{
			new = ptr;
		}
	}
	return (new);
}
