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
	void *a[1000];
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (new)
	{
		for (i = 0; i < nmemb; i++)
		{
			a[i] = 0;
		}
		new = &a;
		return (new);
	}
	else
	{
		return (NULL);
	}
}
