#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - allocates memory to an array
 *
 * @nmemb: array size
 * @size: size of bytes
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *new = malloc((nmemb * size) + 1);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (new)
	{
		return (new);
	}
	else
	{
		return (NULL);
	}
}
